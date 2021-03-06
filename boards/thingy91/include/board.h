/*
 * Copyright (C) 2021 HAW-Hamburg
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     boards_thingy91
 * @{
 *
 * @file
 * @brief       Board specific definitions for the Thingy:91
 *
 * @author      Viet <TopologicRose@protonmail.com>
 */

#ifndef BOARD_H
#define BOARD_H

#include "cpu.h"
#include "periph_conf.h"
#include "periph_cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    Clock configuration
 *
 * @note    The LTE modem will only work with the high accuracy RC oscillator
 *
 * @{
 */
#define CLOCK_HFCLK         (32U)           /**< set to  0: internal RC oscillator
                                             *        32: 32MHz crystal */
#define CLOCK_LFCLK         (3)             /**< set to  0: internal RC oscillator
                                             *         3: High Accuracy oscillator */
/** @} */
/**
 * @name    LED pin configuration
 * @{
 */
#define LED0_PIN            GPIO_PIN(0, 29) /**< LED0 pin definition */
#define LED1_PIN            GPIO_PIN(0, 30) /**< LED1 pin definition */
#define LED2_PIN            GPIO_PIN(0, 31) /**< LED2 pin definition */

#define LED0_MASK           (1 << 29)       /**< LED0 PORT bitmask */
#define LED1_MASK           (1 << 30)       /**< LED1 PORT bitmask */
#define LED2_MASK           (1 << 31)       /**< LED2 PORT bitmask */

#define LED_PORT            (NRF_P0_S) /**< Default LED PORT */

#define LED0_ON             (LED_PORT->OUTSET = LED0_MASK) /**< LED0 ON macro */
#define LED0_OFF            (LED_PORT->OUTCLR = LED0_MASK) /**< LED0 OFF macro */
#define LED0_TOGGLE         (LED_PORT->OUT   ^= LED0_MASK) /**< LED0 toggle macro */

#define LED1_ON             (LED_PORT->OUTSET = LED1_MASK) /**< LED1 ON macro */
#define LED1_OFF            (LED_PORT->OUTCLR = LED1_MASK) /**< LED1 OFF macro */
#define LED1_TOGGLE         (LED_PORT->OUT   ^= LED1_MASK) /**< LED1 toggle macro */

#define LED2_ON             (LED_PORT->OUTSET = LED2_MASK) /**< LED2 ON macro */
#define LED2_OFF            (LED_PORT->OUTCLR = LED2_MASK) /**< LED2 OFF macro */
#define LED2_TOGGLE         (LED_PORT->OUT   ^= LED2_MASK) /**< LED2 toggle macro */

/** @} */

/**
 * @name    Button pin configuration
 * @{
 */
#define BTN0_PIN            GPIO_PIN(0, 26)  /**< BTN0 pin definition */
#define BTN0_MODE           GPIO_IN         /**< BTN0 default mode */

/** @} */

/**
 * @brief   Initialize the platform
 */
void board_init(void);

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H */
/** @} */
