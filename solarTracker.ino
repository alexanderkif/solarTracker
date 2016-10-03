#include <Stepper.h>
Stepper  _StM1(32,8,10,9,11);
Stepper  _StM2(32,19,17,18,16);
int delta = 20;
void setup()
{
_StM1.setSpeed(200);
_StM2.setSpeed(200);
pinMode(13, OUTPUT);
}
void loop()
{   
//горизонтальное движение
if((analogRead(A3)-analogRead(A2)) > (delta)) {_StM1.step(-1);}
else {
    if((analogRead(A3)-analogRead(A2)) < (-delta)) {_StM1.step(1);}
    else {_StM1.noHold();}
}

//вертикальное движение
if((analogRead(A3)-analogRead(A2)) < (delta) && (analogRead(A3)-analogRead(A2)) > (-delta)){
    if (digitalRead(4)){
        digitalWrite(13, 1);
        if((analogRead(A1)-analogRead(A2)) >= (-delta)) {_StM2.noHold();}
    }
    else {
        if((analogRead(A1)-analogRead(A2)) > (delta)) {_StM2.step(-1);}//вниз
        digitalWrite(13, 0);
    }
    if (digitalRead(5)){
        digitalWrite(13, 1);  
        if((analogRead(A1)-analogRead(A2)) <= (delta)){_StM2.noHold();}
    }
    else {
        if((analogRead(A1)-analogRead(A2)) < (-delta)) {_StM2.step(1);}//вверх
        digitalWrite(13, 0);
    }
    if ((analogRead(A1)-analogRead(A2)) >= (-delta)&&(analogRead(A1)-analogRead(A2)) <= (delta)) {_StM2.noHold();}
}}
