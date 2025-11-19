#define _XTAL_FREQ 20000000
#include <stdbool.h>
#include <htc.h>
#include <xc.h>
// B? hai dòng __CONFIG c?
// S? d?ng cú pháp m?i c?a XC8
#pragma config FOSC = HS        // High Speed Oscillator (Th?ch anh 20MHz)
#pragma config WDTE = OFF       // Watchdog Timer Disabled
#pragma config PWRTE = ON       // Power-up Timer Enabled
#pragma config CP = OFF         // Code Protection Disabled
extern unsigned char led[8] = {
    0xFE, //0x01,
    0xFC, //0x03,
    0xF8, //0x07,
    0xF0, //0x0F,
    0xE0, //0x1F,
    0xC0, //0x3F,
    0x80, //0x7F,
    0x00, //0xFF, 

};
extern unsigned char lednguoc[9]={
    0xFF,
    0x7F,
    0x3F,
    0x1F,
    0x0F,
    0x07,
    0x03,
    0x01,
    0x00,
};