#include "main.h"

void codeled() {
    for (int i = 0; i < 9; i++) {
        PORTD = led[i];
        __delay_ms(100);
        if (i >= 8) {
            for (i = 0; i < 9; i++) {
                PORTD = ~lednguoc[i];
                __delay_ms(100);

            }
        }

    }

}

void codeled2() {
    for (int i = 0; i < 9; i++) {
        PORTD = lednguoc[i];
        __delay_ms(100);
        if (i >= 8) {
            for (i = 0; i < 9; i++) {
                PORTD = ~led[i];
                __delay_ms(100);
            }
        }
    }

}

void main(void) {
    ADCON1 = 0;
    TRISD = 0x00;
    TRISB = 0x03;
    PORTD = 0xFF;
    while (1) {
        if (RB0 == 1)
            __delay_ms(20);
        if (RB0 == 1) {
            codeled();
        }
        if (RB1 == 1)
            __delay_ms(20);
        if (RB1 == 1) {
            codeled2();
        }



    }

}








