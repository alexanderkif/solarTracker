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
    else {digitalWrite(8, LOW);
          digitalWrite(9, LOW);
          digitalWrite(10, LOW);
          digitalWrite(11, LOW);}
}

//вертикальное движение
if((analogRead(A3)-analogRead(A2)) < (delta) && (analogRead(A3)-analogRead(A2)) > (-delta)){
    if (digitalRead(4)){
        digitalWrite(13, 1);
        if((analogRead(A1)-analogRead(A2)) >= (-delta)) {
                  digitalWrite(16, LOW);
                  digitalWrite(17, LOW);
                  digitalWrite(18, LOW);
                  digitalWrite(19, LOW);}
    }
    else {
        if((analogRead(A1)-analogRead(A2)) > (delta)) {_StM2.step(-1);}//вниз
        digitalWrite(13, 0);
    }
    if (digitalRead(5)){
        digitalWrite(13, 1);  
        if((analogRead(A1)-analogRead(A2)) <= (delta)) {
                  digitalWrite(16, LOW);
                  digitalWrite(17, LOW);
                  digitalWrite(18, LOW);
                  digitalWrite(19, LOW);}    
    }
    else {
        if((analogRead(A1)-analogRead(A2)) < (-delta)) {_StM2.step(1);}//вверх
        digitalWrite(13, 0);
    }
    if ((analogRead(A1)-analogRead(A2)) >= (-delta)&&(analogRead(A1)-analogRead(A2)) <= (delta)) {
                  digitalWrite(16, LOW);
                  digitalWrite(17, LOW);
                  digitalWrite(18, LOW);
                  digitalWrite(19, LOW);}
}}
