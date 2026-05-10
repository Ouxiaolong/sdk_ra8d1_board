# ra8d1-cpk-board

**English** | [**中文**](./README_zh.md)

## Introduction

The CPKCOR-RA8D1B core board is a modular development board designed by Renesas Electronics for the Chinese market. It uses Renesas RA8D1MCU and supports MIPI-DSI display output interface. The core board is already equipped with unique peripheral interfaces and devices supported by the RA8 MCU, which can be directly used for learning, evaluation, and application development.

The CPKCOR-RA8D1B development board is based on the Renesas Cortex-M85 architecture RA8D1 chip, providing engineers with a flexible and comprehensive development platform to help developers gain a deeper experience in the field of machine vision.



![](documents/images/board.png)



## Directory Structure

```
$ ra8d1-cpk-board
├── README.md
├── documents
│   ├── RA8D1_Datasheet.pdf
│   ├── RA8D1_User’s Manual.pdf
│   ├── CPKCOR_RA8x1x_V2_schmatic_release.pdf
│   └── images
├── cpk_board_blink_led
├── cpk_board_mipi_lcd
├── cpk_board_mipi_lvgl

```

- documents: Includes drawings, documents, images, datasheets, etc.
- libraries: Generic peripheral drivers for RA8D1.
- cpk_board_xxx: Consists of example project folders, including factory programs, OpenMV programs, etc.



**sdk-ra8d1-board** supports development using both RT-Thread Studio and MDK.

## RT-Thread Studio Development Steps

1. Execute the mklinks.bat file to generate two folders: rt-thread and libraries.

![](./documents/images/mklinks.png)

*Note: If the mklinks script cannot be executed, manually copy the rt-thread and libraries folders from the sdk-ra8d1-board directory to the project directory.*

2. Open RT Thread Studio and import the project

![](./documents/images/RT-Thread_Studio_Import_Project.png)

3. Click the build button to compile the project.

![](./documents/images/RT-Thread_Studio_Build.png)

4. Click the download button to flash the firmware.

![](./documents/images/RT-Thread_Studio_Download.png)



## MDK Development Steps

1. Execute the mklinks.bat file to generate two folders: rt-thread and libraries.

![](documents/images/mklinks.png)

*Note: If the mklinks script cannot be executed, manually copy the rt-thread and libraries folders from the sdk-ra8d1-board directory to the project directory.*

2. Open the project.uvprojx file to launch the MDK project.

![](documents/images/uvprojx.png)ub.com/RT-

3. Click the build button to compile the project.

![](documents/images/MDK5_Build.png)

4. Click the download button to flash the firmware.

![](documents/images/MDK5_Download.png)