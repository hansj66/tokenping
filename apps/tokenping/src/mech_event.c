/*
**   Copyright 2016 Telenor Digital AS
**
**  Licensed under the Apache License, Version 2.0 (the "License");
**  you may not use this file except in compliance with the License.
**  You may obtain a copy of the License at
**
**      http://www.apache.org/licenses/LICENSE-2.0
**
**  Unless required by applicable law or agreed to in writing, software
**  distributed under the License is distributed on an "AS IS" BASIS,
**  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**  See the License for the specific language governing permissions and
**  limitations under the License.
*/

#include "hal/hal_gpio.h"
#include "console/console.h"

uint16_t tokens = 0;

static void coin_event(void *arg)
{
    tokens++;
    console_printf("Coin !\n");
}

void init_mech_event()
{
    hal_gpio_irq_init(31, coin_event, NULL, HAL_GPIO_TRIG_RISING, HAL_GPIO_PULL_UP);

    hal_gpio_irq_enable(31);


}