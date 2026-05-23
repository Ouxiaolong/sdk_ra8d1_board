# ra8d1-cpk-board

**中文** | [**English**](./README.md)

## 简介

中文页

### CPKCOR-RA8D1B核心板

CPKCOR-RA8D1B核心板 是瑞萨电子为中国市场设计的模块化开发板， 使用瑞萨RA8D1MCU，支持MIPI-DSI显示输出接口。 核心板上已经搭载了RA8 MCU支持的较为有特色的外设接口和器件，可以直接使用核心板进行学习，评估和应用开发。

CPKCOR-RA8D1B开发板是基于瑞萨 Cortex-M85 架构 RA8D1 芯片，为工程师们提供了一个灵活、全面的开发平台，助力开发者在机器视觉领域获得更深层次的体验。

![](documents/images/core_board.png)



### CPKEXP-RA8D1B 扩展板

CPKEXP-RA8D1B 是适用于CPK-RA8x1系列核心板的通用扩展板，扩展板上提供了和EK-RA8x1类似的接口，其中部分接口和EK-RA8x1管脚兼容，可以方便地评估RA8x1 MCU的大部分功能。

![](documents/images/exp_board.jpg)

#### 板载硬件功能

- USB-FS Type-C 接口，通过2.0mm跳线组合选择Host或Device功能，支持RA8x1 MCU的USB-Boot功能。
- 2路CAN-FD 收发器，通过2.54mm跳线座连接MCU，可灵活适配需要使用的CAN通道和管脚。
- 百兆以太网，使用LAN8720AI PHY。
- H0233S001 2.33英寸全接口LCD模组，支持MIPI-DSI/RGB666/SPI显示接口（可选装）。
- QSPI Flash，WSON 6x8封装，可贴装NAND Flash (缺省不贴装)。
- RESET按键和NMI中断按键，1个用户按键。
- 1个电源LED，2个用户LED。

 

#### 扩展接口

所有的扩展接口都可以作为GPIO扩展来使用，但在管脚分布上，同一外设功能的I/O尽量分布在一起。排针接口的规格均为2.54mm间距。

- PMOD接口，支持Type2A扩展SPI接口（缺省）以及Type3A扩展UART接口（需修改跳接电阻）。
- Arduino UNO扩展接口。
- Grove接口1，仅支持I2C功能。
- Grove接口2，可选I2C、I3C或模拟接口功能。
- 50pin FPC LCD触摸屏扩展接口，支持MIPI-DSI（2 Lane）、RGB666、SPI显示，I2C触摸屏。
- 40pin 双排针 LCD触摸屏接口，支持RGB888显示，I2C触摸屏（与EK-RA8D1兼容）。
- 24pin FPC CEU接口（DVP摄像头接口），可以直接连接OV7725摄像头模组。
- 30pin 双排针 摄像头接口，其中前20pin的管脚定义和EK-RA8D1兼容。
- 20pin FPC接口，用于扩展OSPI设备（需要禁用核心板上的QSPI存储）。
- 20pin 双排针 SDIO/MMC接口。
- 24pin 双排针 GPIO信号扩展。
- 10pin 双排针 USB FS及调试烧录控制。
- 10pin CMSIS-DAP调试接口。
- 20pin ETM调试接口（未实装）。



## 目录结构

```
$ ra8d1-cpk-board
├── README.md
├── documents
│   ├── RA8D1_Datasheet.pdf
│   ├── RA8D1_User’s Manual.pdf
│   ├── CPKCOR_RA8x1x_V2_schmatic_release.pdf
│   ├── CPKEXP_RA8x1x_V1_schmatic_release.pdf
│   └── images
├── cpk_board_blink_led
├── cpk_board_mipi_lcd
├── cpk_board_mipi_lvgl
├── cpk_board_ethernet
```

- documents：图纸，文档，图片以及 datasheets 等
- libraries ：RA8D1 通用外设驱动
- cpk_board_xxx：示例工程文件夹，包含出厂程序，OpenMV 程序等



`sdk-ra8d1-board` 支持 **RT-Thread Studio** 和 **MDK** 开发方式

## RT-Thread Studio 开发步骤

1. 双击 mklinks.bat 文件，执行脚本后会生成 rt-thread、libraries 两个文件夹：

![](documents/images/mklinks_zh.png)

**注意：如果无法执行mklinks脚本，需要手动将 `sdk-ra8d1-board目录下的 rt-thread、libraries 两个文件夹手动拷贝到工程目录**

2. 打开RT-Thread Studio ，导入工程

![](documents/images/RT-Thread_Studio_Import_Project.png)

3. 点击下图按钮进行项目全编译

![](documents/images/RT-Thread_Studio_Build.png)

4. 点击下图按钮进行固件烧录

![](documents/images/RT-Thread_Studio_Download.png)



## MDK开发步骤

1. 双击 mklinks.bat 文件，执行脚本后会生成 rt-thread、libraries 两个文件夹：

![](documents/images/mklinks_zh.png)

**注意：如果无法执行mklinks脚本，需要手动将 `sdk-ra8d1-board目录下的 rt-thread、libraries 两个文件夹手动拷贝到工程目录**

2. 双击 **project.uvprojx** 文件打开MDK工程

![](documents/images/uvprojx.png)

3. 点击下图按钮进行项目全编译

![](documents/images/MDK5_Build.png)

4. 点击下图按钮进行固件烧录

![](documents/images/MDK5_Download.png)
