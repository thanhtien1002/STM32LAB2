/*
 * Display7SEG.h
 *
 *  Created on: Oct 21, 2024
 *      Author: ASUS
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_

#include "main.h"

#define LED_NUMBER 4

extern int led_index;
extern int led_buffer[LED_NUMBER];

void Display7SEG(int num);
void update7SEG(int index);
#endif /* INC_DISPLAY7SEG_H_ */
