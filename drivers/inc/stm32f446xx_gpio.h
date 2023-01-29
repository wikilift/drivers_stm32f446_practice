/*
 * stm32f446xx_gpio.h
 *
 *  Created on: 29 ene. 2023
 *      Author: dinux
 */

#ifndef DRIVERS_INC_STM32F446XX_GPIO_H_
#define DRIVERS_INC_STM32F446XX_GPIO_H_

/* Number of pin. Posible value @GPIO_PIN_NUMBERS*/
typedef struct {
	GPIO_Pin_t GPIO_Pin;
	GPIO_Mode_t GPIO_Mode;
} GPIO_Config_t;

/* @GPIO_pin_numbers*/
typedef enum {
	GPIO_Pin_0,
	GPIO_Pin_1,
	GPIO_Pin_2,
	GPIO_Pin_3,
	GPIO_Pin_4,
	GPIO_Pin_5,
	GPIO_Pin_6,
	GPIO_Pin_7,
	GPIO_Pin_8,
	GPIO_Pin_9,
	GPIO_Pin_10,
	GPIO_Pin_11,
	GPIO_Pin_12,
	GPIO_Pin_13,
	GPIO_Pin_14,
	GPIO_Pin_15
} GPIO_Pin_t;

/*
 * @GPIO_SPEEDS
 */
typedef enum {
	GPIO_Speed_LOW, GPIO_Speed_MED, GPIO_Speed_FAST, GPIO_Speed_HIGH
} GPIO_Speed_t;

/*
 * @GPIO_OTYPES
 */
typedef enum {
	GPIO_OType_PP, /* Push-Pull */
	GPIO_OType_OD /* Open drain */
} GPIO_OType_t;

/*
 * @GPIO_ALT_FUNC
 */
typedef enum {
	GPIO_ALTFUN_0,
	GPIO_ALTFUN_1,
	GPIO_ALTFUN_2,
	GPIO_ALTFUN_3,
	GPIO_ALTFUN_4,
	GPIO_ALTFUN_5,
	GPIO_ALTFUN_6,
	GPIO_ALTFUN_7,
	GPIO_ALTFUN_8,
	GPIO_ALTFUN_9,
	GPIO_ALTFUN_10,
	GPIO_ALTFUN_11,
	GPIO_ALTFUN_12,
	GPIO_ALTFUN_13,
	GPIO_ALTFUN_14,
	GPIO_ALTFUN_15
} GPIO_AltFun_t;
/*
 * @GPIO_PUPD
 */
typedef enum {
	GPIO_PuPd_NONE, GPIO_PuPd_UP, GPIO_PuPd_DOWN
} GPIO_PuPd_t;

/*@GPIO function selector*/
typedef enum {
	GPIO_Mode_IN, GPIO_Mode_OUT, GPIO_Mode_AF, GPIO_Mode_AG
} GPIO_Mode;

typedef struct {
	GPIO_RegDef_t *pGPIOx;
	GPIO_Config_t GPIO_config;
} GPIO_handle_t;

#endif /* DRIVERS_INC_STM32F446XX_GPIO_H_ */
