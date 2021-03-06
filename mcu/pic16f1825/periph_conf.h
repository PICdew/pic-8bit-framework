/*
 * Copyright (C) 2017  Francois Berder <fberder@outlook.fr>
 *
 * This file is part of pic18-framework.
 *
 * pic18-framework is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * pic18-framework is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with pic18-framework.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __PERIPH_CONF_H
#define __PERIPH_CONF_H

#include "mcu.h"

#define __HAL_ENABLE_INTERRUPTS(__state) do {   \
    if (__state) mcu_enable_interrupts();       \
    } while (0)
#define __HAL_DISABLE_INTERRUPTS(__state) do {  \
    __state = mcu_get_interrupt_state();        \
    mcu_disable_interrupts();                   \
    } while(0)

enum MCU_PORT {
    PORT_A = 0,
    /* No port B on PIC16F1825 */
    PORT_C = 2
};

enum WATCHDOG_PRESCALER {
    WATCHDOG_PERIOD_1MS,
    WATCHDOG_PERIOD_2MS,
    WATCHDOG_PERIOD_4MS,
    WATCHDOG_PERIOD_8MS,
    WATCHDOG_PERIOD_16MS,
    WATCHDOG_PERIOD_32MS,
    WATCHDOG_PERIOD_64MS,
    WATCHDOG_PERIOD_128MS,
    WATCHDOG_PERIOD_256MS,
    WATCHDOG_PERIOD_512MS,
    WATCHDOG_PERIOD_1S,
    WATCHDOG_PERIOD_2S,
    WATCHDOG_PERIOD_4S,
    WATCHDOG_PERIOD_8S,
    WATCHDOG_PERIOD_16S,
    WATCHDOG_PERIOD_32S,
    WATCHDOG_PERIOD_64S,
    WATCHDOG_PERIOD_128S,
    WATCHDOG_PERIOD_256S
};

enum TIMER0_PRESCALER {
    TIMER0_PRESCALER_1,
    TIMER0_PRESCALER_2,
    TIMER0_PRESCALER_4,
    TIMER0_PRESCALER_8,
    TIMER0_PRESCALER_16,
    TIMER0_PRESCALER_32,
    TIMER0_PRESCALER_64,
    TIMER0_PRESCALER_128,
    TIMER0_PRESCALER_256
};

enum TIMER1_PRESCALER {
    TIMER1_PRESCALER_1,
    TIMER1_PRESCALER_2,
    TIMER1_PRESCALER_4,
    TIMER1_PRESCALER_8,
};

enum TIMER2_PRESCALER {
    TIMER2_PRESCALER_1,
    TIMER2_PRESCALER_4,
    TIMER2_PRESCALER_16,
    TIMER2_PRESCALER_64
};

enum TIMER2_POSTCALER {
    TIMER2_POSTCALER_1,
    TIMER2_POSTCALER_2,
    TIMER2_POSTCALER_3,
    TIMER2_POSTCALER_4,
    TIMER2_POSTCALER_5,
    TIMER2_POSTCALER_6,
    TIMER2_POSTCALER_7,
    TIMER2_POSTCALER_8,
    TIMER2_POSTCALER_9,
    TIMER2_POSTCALER_10,
    TIMER2_POSTCALER_11,
    TIMER2_POSTCALER_12,
    TIMER2_POSTCALER_13,
    TIMER2_POSTCALER_14,
    TIMER2_POSTCALER_15,
    TIMER2_POSTCALER_16,
};

enum TIMER4_PRESCALER {
    TIMER4_PRESCALER_1,
    TIMER4_PRESCALER_4,
    TIMER4_PRESCALER_16,
    TIMER4_PRESCALER_64
};

enum TIMER4_POSTCALER {
    TIMER4_POSTCALER_1,
    TIMER4_POSTCALER_2,
    TIMER4_POSTCALER_3,
    TIMER4_POSTCALER_4,
    TIMER4_POSTCALER_5,
    TIMER4_POSTCALER_6,
    TIMER4_POSTCALER_7,
    TIMER4_POSTCALER_8,
    TIMER4_POSTCALER_9,
    TIMER4_POSTCALER_10,
    TIMER4_POSTCALER_11,
    TIMER4_POSTCALER_12,
    TIMER4_POSTCALER_13,
    TIMER4_POSTCALER_14,
    TIMER4_POSTCALER_15,
    TIMER4_POSTCALER_16,
};

enum TIMER6_PRESCALER {
    TIMER6_PRESCALER_1,
    TIMER6_PRESCALER_4,
    TIMER6_PRESCALER_16,
    TIMER6_PRESCALER_64
};

enum TIMER6_POSTCALER {
    TIMER6_POSTCALER_1,
    TIMER6_POSTCALER_2,
    TIMER6_POSTCALER_3,
    TIMER6_POSTCALER_4,
    TIMER6_POSTCALER_5,
    TIMER6_POSTCALER_6,
    TIMER6_POSTCALER_7,
    TIMER6_POSTCALER_8,
    TIMER6_POSTCALER_9,
    TIMER6_POSTCALER_10,
    TIMER6_POSTCALER_11,
    TIMER6_POSTCALER_12,
    TIMER6_POSTCALER_13,
    TIMER6_POSTCALER_14,
    TIMER6_POSTCALER_15,
    TIMER6_POSTCALER_16,
};

#endif
