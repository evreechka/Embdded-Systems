#include "hal.h"
#include <iostream>

void first_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_3, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_3, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void second_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void third_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void forth_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void fifth_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void six_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void seventh_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_3, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_3, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void eighth_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void nineth_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void tenth_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void eleventh_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void twelve_animation() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);
    HAL_Delay(500);
}

void get_read() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
}

void get_green() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);
}

void get_yellow() {
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);
}

void animation_work() {
    while (true) {
        GPIO_PinState state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            first_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            second_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            third_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            forth_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            fifth_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            six_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            seventh_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            eighth_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            nineth_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            tenth_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            eleventh_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            if (state == GPIO_PIN_RESET) {
                get_read();
                HAL_Delay(200);
                state = GPIO_PIN_SET;
                while (state == GPIO_PIN_SET) {
                    get_read();
                    state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
                }
            }
            get_green();
            twelve_animation();
            HAL_Delay(100);
            state = HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_15);
        } else {
            return;
        }
    }
}

void normal_work() {
    unsigned int sw_num[] = {GPIO_PIN_4, GPIO_PIN_8, GPIO_PIN_10, GPIO_PIN_12};
    unsigned int leds_num[] = {GPIO_PIN_3, GPIO_PIN_4, GPIO_PIN_5,
                               GPIO_PIN_6, GPIO_PIN_8, GPIO_PIN_9,
                               GPIO_PIN_11, GPIO_PIN_12};
    while (!(HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
             HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
             HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
             HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET)) {
        get_yellow();
        for (int i = 0; i < 4; i++) {
            GPIO_PinState state = HAL_GPIO_ReadPin(GPIOE, sw_num[i]);
            HAL_GPIO_WritePin(GPIOD, leds_num[i], state);
        }
    }
}

int umain() {
    while (true) {
        if (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_SET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET &&
            HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET) {
            get_green();
            animation_work();
        } else {
            get_yellow();
            normal_work();
        }
    }
    return 0;
}
