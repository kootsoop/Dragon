#include <Servo.h>

Servo servo_12;

void setup()
{
  servo_12.attach(12);

}


void loop()
{
  servo_12.write(90);
  delay(1000);
  servo_12.write(0);
  delay(1000);

}