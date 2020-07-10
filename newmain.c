/* 
 * File:   newmain.c
 * Author: I14746
 *
 * Created on May 7, 2020, 10:17 AM
 */

#include <stdio.h>
#include <stdlib.h>

#pragma config FOSC = INTOSC_HS // Oscillator Selection bits (Internal oscillator, HS oscillator used by USB (INTHS))
#pragma config IESO = ON        // Internal/External Oscillator Switchover bit (Oscillator Switchover mode enabled)
#pragma config WDT = OFF  
#pragma config LVP = OFF

/*
 * 
 */
int add(int a,int b);

int main(int argc, char** argv) {
    int d = 12;
    int e = 15;
    int f = 0;
    f = add(d,e);
    f = f * 2;    
    return (EXIT_SUCCESS);
}

int add(int a, int b){
    int c = 0;
    c = a + b;
    return c;
}
