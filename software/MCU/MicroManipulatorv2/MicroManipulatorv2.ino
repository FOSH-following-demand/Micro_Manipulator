#include <AFMotor.h>
#include <Servo.h>

AF_DCMotor motor(3), motor2(4),motor3(2),motor4(1);
int ledPin = 13; 
int Jx = 0;
int Jy= 0;
int Jz= 0;
Servo myservo; 
int pos=0;
int pump =A3;

void setup() {
  myservo.attach(10);
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin,LOW);
  motor.setSpeed(100);
  motor.run(RELEASE); 
  motor2.setSpeed(100);
  motor2.run(RELEASE);
  motor3.setSpeed(100);
  motor3.run(RELEASE);
}

void loop() {
     
  motor.setSpeed(155);
  motor2.setSpeed(155);
  Jx = analogRead(A0);
  Jy = analogRead(A1);
  pump=analogRead(A2);
  Jz = analogRead(A3);

  Serial.print(Jx);
  Serial.print(" , ");
  Serial.println(Jy);
  Serial.print(" , ");
  Serial.println(Jz);
  delay(10);
  
  if (Jx>650)
  {Serial.print("Der");
  motor.run(FORWARD); motor.setSpeed(205);
  digitalWrite(ledPin,HIGH);delay(10);}
    else if(Jx<250)
  {Serial.print("Izq");
  motor.run(BACKWARD); motor.setSpeed(205);  
  digitalWrite(ledPin,HIGH);delay(10);}
    else
  {digitalWrite(ledPin,LOW);delay(10);}

  if (Jy>650)
  {Serial.print("Aba");
  motor2.run(FORWARD); motor2.setSpeed(205);
  digitalWrite(ledPin,HIGH);delay(10);}
    else if(Jy<250)
  {Serial.print("Arr");
  motor2.run(BACKWARD); motor2.setSpeed(205);  
  digitalWrite(ledPin,HIGH);delay(10);}
    else
  {digitalWrite(ledPin,LOW);delay(10);}

  if (Jz>650)
  {Serial.print("Aba");
  motor3.run(FORWARD); motor3.setSpeed(205);
  digitalWrite(ledPin,HIGH);delay(10);}
    else if(Jz<250)
  {Serial.print("Arr");
  motor3.run(BACKWARD); motor3.setSpeed(205);  
  digitalWrite(ledPin,HIGH);delay(10);}
    else
  {digitalWrite(ledPin,LOW);delay(10);}

  motor.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  
 
  if (pump>250)
  {myservo.write(45);delay(10);}
  
  else if(pump<650)
  {myservo.write(120);delay(10);}
  
  else
  {delay(10);}


  
}
