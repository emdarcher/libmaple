/******************************************************************************
 * The MIT License
 *
 * Copyright (c) 2011 LeafLabs, LLC.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *****************************************************************************/

/**
 * @file   wirish/boards/SmartSensor_v1/include/board/board.h
 * @author Ethan Durrant
 * @brief  SmartSensor_v1 board header.
 *
 * See wirish/boards/maple/include/board/board.h for more information
 * on these definitions.
 */



#ifndef _BOARD_SMARTSENSOR_V1_H_
#define _BOARD_SMARTSENSOR_V1_H_

#define CYCLES_PER_MICROSECOND    72
#define SYSTICK_RELOAD_VAL     71999 /* takes a cycle to reload */


/*
#define BOARD_BUTTON_PIN          32
#define BOARD_LED_PIN             8//changed

#define BOARD_NR_USARTS           3
#define BOARD_USART1_TX_PIN       26
#define BOARD_USART1_RX_PIN       25
#define BOARD_USART2_TX_PIN       9
#define BOARD_USART2_RX_PIN       8
#define BOARD_USART3_TX_PIN       1
#define BOARD_USART3_RX_PIN       0

#define BOARD_NR_SPI              2
#define BOARD_SPI1_NSS_PIN        7
#define BOARD_SPI1_MOSI_PIN       4
#define BOARD_SPI1_MISO_PIN       5
#define BOARD_SPI1_SCK_PIN        6
#define BOARD_SPI2_NSS_PIN        31
#define BOARD_SPI2_MOSI_PIN       28
#define BOARD_SPI2_MISO_PIN       29
#define BOARD_SPI2_SCK_PIN        30

#define BOARD_NR_GPIO_PINS        34
#define BOARD_NR_PWM_PINS         12
#define BOARD_NR_ADC_PINS          9
#define BOARD_NR_USED_PINS         4

#define BOARD_JTMS_SWDIO_PIN      22
#define BOARD_JTCK_SWCLK_PIN      21
#define BOARD_JTDI_PIN            20
#define BOARD_JTDO_PIN            19
#define BOARD_NJTRST_PIN          18

#define BOARD_USB_DISC_DEV        GPIOB
#define BOARD_USB_DISC_BIT        9

enum {
    PB11, PB10, PB2, PB0, PA7, PA6, PA5, PA4, PA3, PA2, PA1, PA0, PC15, PC14,
    PC13, PB7, PB6, PB5, PB4, PB3, PA15, PA14, PA13, PA12, PA11, PA10, PA9,
    PA8, PB15, PB14, PB13, PB12, PB8, PB1
};*/


#define BOARD_BUTTON_PIN          0 //also wakeup
#define BOARD_LED_PIN             26//might be a problem since it is on PC13?

#define BOARD_NR_USARTS           3
#define BOARD_USART1_TX_PIN       17
#define BOARD_USART1_RX_PIN       18
#define BOARD_USART2_TX_PIN       2
#define BOARD_USART2_RX_PIN       3
#define BOARD_USART3_TX_PIN       10
#define BOARD_USART3_RX_PIN       11

#define BOARD_NR_SPI              2
#define BOARD_SPI1_NSS_PIN        4
#define BOARD_SPI1_MOSI_PIN       7
#define BOARD_SPI1_MISO_PIN       6
#define BOARD_SPI1_SCK_PIN        5
#define BOARD_SPI2_NSS_PIN        12
#define BOARD_SPI2_MOSI_PIN       15
#define BOARD_SPI2_MISO_PIN       14
#define BOARD_SPI2_SCK_PIN        13

#define BOARD_NR_GPIO_PINS        33
#define BOARD_NR_PWM_PINS         14 //may change in future?
#define BOARD_NR_ADC_PINS         10 //with PB1
#define BOARD_NR_USED_PINS         7 //change to 9 if using USB pins for usb

#define BOARD_JTMS_SWDIO_PIN      27
#define BOARD_JTCK_SWCLK_PIN      28
#define BOARD_JTDI_PIN            29
#define BOARD_JTDO_PIN            30
#define BOARD_NJTRST_PIN          31

#define BOARD_USB_DISC_DEV        GPIOB
#define BOARD_USB_DISC_BIT        9

enum {
PA0,PA1,PA2,PA3,PA4,PA5,PA6,PA7,PB0,PB2,PB10,PB11,PB12,PB13,PB14,PB15,PA8,PA9,
PA10,PA11,PA12,PB5,PB6,PB7,PB8,PB9,PC13,PA13,PA14,PA15,PB3,PB4,PB1
};

#endif
