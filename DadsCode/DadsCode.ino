/*



*/



#include <Servo.h>



int sensorPin = 0;    // The potentiometer is connected to

                      // analog pin 0

                      

const int ledPin = 13;      // The LED is connected to digital pin 13



const int servoPin = 12;

Servo servo;



void setup() // this function runs once when the sketch starts up

{

  pinMode(ledPin, OUTPUT);

  servo.attach(servoPin);

  Serial.begin(9600);   

}





void loop() // this function runs repeatedly after setup() finishes

{

//  unsigned int sensorValue = analogRead(sensorPin);

//  

//  unsigned int angle = sensorValue / 4 * 180 / 256 ;

//

//  Serial.print("Sensor read:");

//  Serial.print(sensorValue);

//  Serial.print(" Angle:");

//  Serial.println(angle);

//

//  digitalWrite(ledPin, LOW);      // Turn the LED off

//  servo.write(angle);

//  delay(10);

//  Serial.print("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");



  servo.write(0);

  delay(500);

  servo.write(90);

  delay(500);

}
