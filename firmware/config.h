#pragma once

#define MATRIX_ROWS 5
#define MATRIX_COLS 17

// Matrix row pins (PA1 to PA5)
#define MATRIX_ROW_PINS { GPIO_PIN_1, GPIO_PIN_2, GPIO_PIN_3, GPIO_PIN_4, GPIO_PIN_5 }
#define MATRIX_ROW_PORTS { GPIOA, GPIOA, GPIOA, GPIOA, GPIOA }

// Matrix column pins (PB0-PB15, PA0)
#define MATRIX_COL_PINS { GPIO_PIN_0, GPIO_PIN_1, GPIO_PIN_2, GPIO_PIN_3, GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_6, GPIO_PIN_8, GPIO_PIN_10, GPIO_PIN_12, GPIO_PIN_13, GPIO_PIN_14, GPIO_PIN_15, GPIO_PIN_0 }
#define MATRIX_COL_PORTS { GPIOB, GPIOB, GPIOB, GPIOB, GPIOB, GPIOB, GPIOB, GPIOB, GPIOB, GPIOB, GPIOB, GPIOB, GPIOB, GPIOA }

// Note: Adjust the above pins if actual wiring differs.

// Diode direction
#define DIODE_DIRECTION COL2ROW

// Rotary encoder pins
#define ENCODERS_PAD_A { GPIO_PIN_6 }
#define ENCODERS_PAD_B { GPIO_PIN_7 }
#define ENCODER_RESOLUTION 4

// Rotary encoder button pin
#define ENCODER_BUTTON_PIN GPIO_PIN_8
#define ENCODER_BUTTON_PORT GPIOA
