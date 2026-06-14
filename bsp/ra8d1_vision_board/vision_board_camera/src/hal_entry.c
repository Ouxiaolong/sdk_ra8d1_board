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

#include <drv_lcd.h>
#include "sensor.h"

#define CAM_WIDTH   320
#define CAM_HEIGHT  240

extern sensor_t sensor;
uint8_t g_image_rgb565_sdram_buffer[CAM_WIDTH * CAM_HEIGHT * 2]  BSP_ALIGN_VARIABLE(8) BSP_PLACE_IN_SECTION(".sdram.data");

void hal_entry(void)
{
    rt_kprintf("This is a camera display demo.\n\n");
    rt_kprintf("===========================================================================\n");
    rt_kprintf("The example will display the data captured by the camera on the LCD screen.\n");
    rt_kprintf("===========================================================================\n");

    sensor_init();
    sensor_reset();
    sensor_set_pixformat(PIXFORMAT_RGB565);
    sensor_set_framesize(FRAMESIZE_QVGA);

    while (1)
    {
        sensor_snapshot(&sensor, g_image_rgb565_sdram_buffer, 0);
        lcd_draw_jpg(0, 0, g_image_rgb565_sdram_buffer, CAM_WIDTH, CAM_HEIGHT);
        rt_thread_mdelay(10);
    }
}
