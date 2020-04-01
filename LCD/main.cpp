#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);

PwmOut PWM1(D6);

int main()

{
float direction = 1;
      uLCD.printf("\n107060015\n"); //Default Green on black text
        uLCD.line(50, 50, 50 , 100, 255);
        uLCD.line(50, 50, 100 , 50, 255);
        uLCD.line(50, 100, 100 , 100, 255);
        uLCD.line(100, 50, 100 , 100, 255);

  PWM1 = 0;
  while(1){
    PWM1.period(0.001);
    if(PWM1 == 0){
      direction = 1;
    }
    else if(PWM1 == 1){
      direction = -1;
    }

    if(direction == 1){
      PWM1 = PWM1 + 0.1;
    }
    else{
      PWM1 = PWM1 - 0.1;
    }

    wait(0.1);
  }


}