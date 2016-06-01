//Biblioteca do Arduino para
//controlar Servo Motores
#include <Servo.h>

Servo servo1;
Servo servo2;

void setup(){
  
  Serial.begin(9600);    
  
  pinMode(5, INPUT);
  
  servo1.attach(9);
  servo2.attach(10);
  
  //Movimentamos ambos os motores para 90 graus
  servo1.write(89);
  servo2.write(89);
  
}

void loop(){
  int rpm = 38;
  int temp1 = 9487;
  int temp2 = temp1/16;
  for (int i=0; i <= 15; i++){
      servo1.write(270);
      servo2.write(-90);
      delay(temp2);
      /*while(digitalRead(5) == LOW)  {               //Teste de detecção do sensor 
        Serial.println("Sensor detectou algo");
          servo1.write(89);
          servo2.write(89);
      }*/
  }
  //servo1.write(90);
  //servo2.write(90);
  //delay(1000);
  
}
