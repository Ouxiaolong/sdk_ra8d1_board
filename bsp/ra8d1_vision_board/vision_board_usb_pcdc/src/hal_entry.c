/*
 * Copyright (c) 2006-2026, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author        Notes
 * 2026-01-18     BruceOu        first version
 */

#include <rtthread.h>
#include "hal_data.h"
#ifdef RT_USING_NANO
#include <drv_gpio.h>
#else
#include <rtdevice.h>
#endif /* RT_USING_NANO */

#include "usb_pcdc.h"

#define DBG_TAG "usb_pcdc"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

#define LED_PIN    BSP_IO_PORT_01_PIN_02 /* Onboard LED pins */

void hal_entry(void)
{
    rt_kprintf("\nHello RT-Thread!\n");
    rt_kprintf("==================================================\n");
    rt_kprintf("This example project is an driver usb_pcdc routine!\n");
    rt_kprintf("Please connect the HS USB development board to the PC.\n");
    rt_kprintf("==================================================\n");

    LOG_I("\nTips:");
    LOG_I("If you want to use FS USB, please open the configuration.xml file, modify the two parameters of the usb_basic Stack:");
    LOG_I("USB Speed         ---> Full Speed");
    LOG_I("USB Module Number ---> USB_IP0_port");

    rt_thread_t usb = rt_thread_create("usb_pcdc", usb_pcdc_app, RT_NULL, 1024, 20, 10);
    if(usb != RT_NULL)
    {
        rt_thread_startup(usb);
    }

    while (1)
    {
        rt_pin_write(LED_PIN, PIN_HIGH);
        rt_thread_mdelay(500);
        rt_pin_write(LED_PIN, PIN_LOW);
        rt_thread_mdelay(500);
    }
}
