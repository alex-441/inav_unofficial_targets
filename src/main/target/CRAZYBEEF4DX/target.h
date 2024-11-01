/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "HAMO"
#define USBD_PRODUCT_STRING     "CRAZYBEEF4DX"

#define LED0                    PC13

#define BEEPER                  PC15
#define BEEPER_INVERTED

// *************** SPI **********************
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN           PA5
#define SPI1_MISO_PIN   	   PA6
#define SPI1_MOSI_PIN   	   PA7

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN           PB13
#define SPI2_MISO_PIN  		   PB14
#define SPI2_MOSI_PIN  		   PB15

// *************** SPI Gyro & ACC **********************

#define USE_IMU_BMI270
#define IMU_BMI270_ALIGN                CW90_DEG
#define BMI270_SPI_BUS                  BUS_SPI1
#define BMI270_CS_PIN                   PA4

// *************** Baro *****************************

#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB11
#define I2C1_SDA                PB9

//#define USE_BARO
//#define BARO_I2C_BUS		    BUS_I2C1
//#define USE_BARO_ALL

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_ALL

// *************** SPI FLASH **************************
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_CS_PIN           PA14
#define M25P16_SPI_BUS          BUS_SPI2
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

//#define USE_SOFTSERIAL1
//#define SOFTSERIAL_1_TX_PIN     PC13
//#define SOFTSERIAL_1_RX_PIN     PB2

#define SERIAL_PORT_COUNT       3

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART2

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                    ADC1
//#define ADC1_DMA_STREAM                 DMA2_CHANNEL4
#define ADC_CHANNEL_1_PIN               PB1
#define ADC_CHANNEL_2_PIN               PB0

#define VBAT_ADC_CHANNEL                ADC_CHN_2
#define CURRENT_METER_ADC_CHANNEL       ADC_CHN_1

//#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC
//#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC

#define VBAT_SCALE_DEFAULT              111
#define CURRENT_METER_SCALE_DEFAULT     438

// *************** LED2812 ************************
#define USE_LED_STRIP
#define WS2811_PIN                      PA8

// ***************  OTHERS *************************
#define DEFAULT_FEATURES                (FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TELEMETRY | FEATURE_BLACKBOX)

#define USE_DSHOT
//#define USE_RPM_FILTER
//#define USE_ESC_SENSOR
//#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff

#define MAX_PWM_OUTPUT_PORTS       4
