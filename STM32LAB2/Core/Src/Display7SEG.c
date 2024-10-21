/*
 * Display7SEG.c
 *
 *  Created on: Oct 21, 2024
 *      Author: ASUS
 */

#include "Display7SEG.h"

void Display7SEG(int num) {
    uint16_t setVal, resetVal;

    switch (num) {
        case 0: setVal = 0x40; resetVal = 0xBF; break;
        case 1: setVal = 0x79; resetVal = 0x86; break;
        case 2: setVal = 0x24; resetVal = 0xDB; break;
        case 3: setVal = 0x30; resetVal = 0xCF; break;
        case 4: setVal = 0x19; resetVal = 0xE6; break;
        case 5: setVal = 0x12; resetVal = 0xED; break;
        case 6: setVal = 0x02; resetVal = 0xFD; break;
        case 7: setVal = 0x78; resetVal = 0x87; break;
        case 8: setVal = 0x00; resetVal = 0xFF; break;
        case 9: setVal = 0x10; resetVal = 0xEF; break;
        default: setVal = 0xFF; resetVal = 0x00; // Trường hợp lỗi
    }

    // Cập nhật giá trị vào thanh ghi dữ liệu đầu ra GPIO
    GPIOA->ODR = (GPIOA->ODR & ~((resetVal << 8))) | (setVal << 8);
}

