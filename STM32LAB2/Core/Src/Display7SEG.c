/*
 * Display7SEG.c
 *
 *  Created on: Oct 21, 2024
 *      Author: ASUS
 */

#include "Display7SEG.h"

uint16_t set7SEG[11] = {0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x02, 0x78, 0x00, 0x10, 0xFF};
uint16_t reset7SEG[11] = {0xBF, 0x86, 0xDB, 0xCF, 0xE6, 0xED, 0xFD, 0x87, 0xFF, 0xEF, 0x00};

void Display7SEG(int num) {
    if (num >= 0 && num <= 9) {
        GPIOB->ODR = (GPIOB->ODR & ~(0xFF << 0)) | (set7SEG[num] << 0);
    }
    else {
        GPIOB->ODR = (GPIOB->ODR & ~(0xFF << 0)) | (set7SEG[10] << 0);
    }
}




