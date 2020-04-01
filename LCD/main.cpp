#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{

      uLCD.printf("\n107060015\n"); //Default Green on black text
        uLCD.line(50, 50, 50 , 100, 255);
        uLCD.line(50, 50, 100 , 50, 255);
        uLCD.line(50, 100, 100 , 100, 255);
        uLCD.line(100, 50, 100 , 100, 255);

      wait(30);

}