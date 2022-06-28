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
 * @brief       Configuration of CPU peripherals for Thingy:91 board
 *
 * @author      Viet <TopologicRose@protonmail.com>
 */

#ifndef PERIPH_CONF_H
#define PERIPH_CONF_H

#include <stdint.h>

#include "cpu.h"
#include "board.h"
#include "periph_cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name   Timer configuration
 * @{
 */
static const timer_conf_t timer_config[] = {
    {
        .dev      = NRF_TIMER0_S,
        .channels = 3,
        .bitmode  = TIMER_BITMODE_BITMODE_32Bit,
        .irqn     = TIMER0_IRQn
    },
    {
        .dev      = NRF_TIMER1_S,
        .channels = 3,
        .bitmode  = TIMER_BITMODE_BITMODE_08Bit,
        .irqn     = TIMER1_IRQn
    },
};

#define TIMER_0_ISR         isr_timer0 /**< Timer0 IRQ*/
#define TIMER_1_ISR         isr_timer1 /**< Timer1 IRQ */

#define TIMER_NUMOF         ARRAY_SIZE(timer_config) /**< Timer configuration NUMOF */
/** @} */

/* put here the board peripherals definitions:
- Available clocks
- Timers
- UARTs
- PWMs
- SPIs
- I2C
- ADC
- RTC
- RTT
etc
 */

#ifdef __cplusplus
}
#endif

#endif /* PERIPH_CONF_H */
/** @} */
