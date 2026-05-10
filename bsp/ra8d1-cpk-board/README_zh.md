# ra8d1-cpk-board

**中文** | [**English**](./README.md)

## 简介

中文页

CPKCOR-RA8D1B核心板 是瑞萨电子为中国市场设计的模块化开发板， 使用瑞萨RA8D1MCU，支持MIPI-DSI显示输出接口。 核心板上已经搭载了RA8 MCU支持的较为有特色的外设接口和器件，可以直接使用核心板进行学习，评估和应用开发。

CPKCOR-RA8D1B开发板是基于瑞萨 Cortex-M85 架构 RA8D1 芯片，为工程师们提供了一个灵活、全面的开发平台，助力开发者在机器视觉领域获得更深层次的体验。

![](documents/images/board.png)

## 目录结构

```
$ ra8d1-cpk-board
├── README.md
├── documents
│   ├── RA8D1_Datasheet.pdf
│   ├── RA8D1_User’s Manual.pdf
│   ├── CPKCOR_RA8x1x_V2_schmatic_release.pdf
│   └── images
├── cpk_board_blink_led
├── cpk_board_blink_led
├── cpk_board_mipi_lcd
├── cpk_board_mipi_lvgl
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
