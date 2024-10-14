#include <Servo.h>
int outPin1 = 5;     //motor1
int outPin2 = 6;    //motor1

int outPin4 = 9;   //motor2
int outPin3 = 10;   //motor2
int pos = 0;
int enable = 2;   //motor2
Servo myservo;
int analogValue = 0;
char bt;

void setup()
{
  Serial.begin(9600);
  myservo.attach(12);

  pinMode(outPin1, OUTPUT);
  pinMode(outPin2, OUTPUT);
  pinMode(outPin3, OUTPUT);
  pinMode(outPin4, OUTPUT);

  pinMode(enable, OUTPUT);
}
void loop()
{

  if (Serial.available() > 0)
  {

    bt = Serial.read();
    digitalWrite(enable, 1);
    if (bt == '0')
    {
      analogValue = 0;
    }
    if (bt == '1')
    {
      analogValue = 25;
    }
    if (bt == '2')
    {
      analogValue = 50;
    }
    if (bt == '3')
    {
      analogValue = 75;
    }
    if (bt == '4')
    {
      analogValue = 100;
    }
    if (bt == '5')
    {
      analogValue = 125;
    }
    if (bt == '6')
    {
      analogValue = 150;
    }
    if (bt == '7')
    {
      analogValue = 175;
    }
    if (bt == '8')
    {
      analogValue = 200;
    }
    if (bt == '9')
    {
      analogValue = 225;
    }
    if (bt == 'q')
    {
      analogValue = 255;
    }
    if (bt == 'F')       //move forwards
    {
      analogWrite(outPin1, analogValue);
      analogWrite(outPin2, 0);
      analogWrite(outPin3, analogValue);
      analogWrite(outPin4, 0);
    }
    if (bt == 'B')       //move backwards
    {
      analogWrite(outPin1, 0);
      analogWrite(outPin2, analogValue);
      analogWrite(outPin3, 0);
      analogWrite(outPin4, analogValue);
    }
    if (bt == 'S')     //stop!!
    {
      analogWrite(outPin1, 0);
      analogWrite(outPin2, 0);
      analogWrite(outPin3, 0);
      analogWrite(outPin4, 0);
    }
    if (bt == 'R')    //right
    {
      analogWrite(outPin1, analogValue);
      analogWrite(outPin2, 0);
      analogWrite(outPin3, 0);
      analogWrite(outPin4, analogValue);
    }
    if (bt == 'L')     //left
    {
      analogWrite(outPin1, 0);
      analogWrite(outPin2, analogValue);
      analogWrite(outPin3, analogValue);
      analogWrite(outPin4, 0);
    }
    if (bt == 'I')    //forward right
    {
      analogWrite(outPin1, analogValue);
      analogWrite(outPin2, 0);
      analogWrite(outPin3, 0);
      analogWrite(outPin4, analogValue);
    }
    if (bt == 'G')    //forward left
    {
      analogWrite(outPin1, 0);
      analogWrite(outPin2, analogValue);
      analogWrite(outPin3, analogValue);
      analogWrite(outPin4, 0);
    }
    if (bt == 'I')    //right
    {
      analogWrite(outPin1, analogValue);
      analogWrite(outPin2, 0);
      analogWrite(outPin3, 0);
      analogWrite(outPin4, 0);
    }
    if (bt == 'G')     //left
    {
      analogWrite(outPin1, 0);
      analogWrite(outPin2, 0);
      analogWrite(outPin3, analogValue);
      analogWrite(outPin4, 0);
    }
    if (bt == 'H')    //right
    {
      analogWrite(outPin1, 0);
      analogWrite(outPin2, analogValue);
      analogWrite(outPin3, 0);
      analogWrite(outPin4, 0);
    }
    if (bt == 'J')     //left
    {
      analogWrite(outPin1, 0);
      analogWrite(outPin2, 0);
      analogWrite(outPin3, 0);
      analogWrite(outPin4, analogValue);
    }
    if (bt == 'W')
    {
      for (pos = 180; pos >= 0; pos -= 1) {
        myservo.write(pos);
        delay(15);
      }
    }
    if (bt == 'w')
    {
      for (pos = 0; pos <= 180; pos += 1) {
        myservo.write(pos);
        delay(15);
      }
    }

  }
}
