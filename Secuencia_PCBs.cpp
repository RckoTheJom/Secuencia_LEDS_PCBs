//SECUENCIAS PCB LEDS E INTERRUPTORES----------------------------------------------

#include <Arduino.h>
#define tiempo 500
#define tiempo1 250
// put function declarations here:
int myFunction(int, int);

void setup() {
  //Entrada
  pinMode(PB0,INPUT);
  pinMode(PB1,INPUT);
  pinMode(PB10,INPUT);
  //Salida
  pinMode(PB9,OUTPUT);
  pinMode(PB8,OUTPUT);
  pinMode(PB7,OUTPUT);
  pinMode(PB6,OUTPUT);
  pinMode(PB5,OUTPUT);
  pinMode(PB4,OUTPUT);


}

void loop() {
 //Primera Secuencia
 if(digitalRead(PB0)==0){
 digitalWrite(PB9,HIGH);
 delay(tiempo);
 digitalWrite(PB9,LOW);
 delay(tiempo);
 digitalWrite(PB8,HIGH);
 delay(tiempo);
 digitalWrite(PB8,LOW);
 delay(tiempo);
 digitalWrite(PB7,HIGH);
 delay(tiempo);
 digitalWrite(PB7,LOW);
 delay(tiempo);
 digitalWrite(PB6,HIGH);
 delay(tiempo);
 digitalWrite(PB6,LOW);
 delay(tiempo);
 digitalWrite(PB5,HIGH);
 delay(tiempo);
 digitalWrite(PB5,LOW);
 delay(tiempo);
 digitalWrite(PB4,HIGH);
 delay(tiempo);
 digitalWrite(PB4,LOW);
 delay(tiempo);
  digitalWrite(PB5,HIGH);
 delay(tiempo);
 digitalWrite(PB5,LOW);
 delay(tiempo);
 digitalWrite(PB6,HIGH);
 delay(tiempo);
 digitalWrite(PB6,LOW);
 delay(tiempo);
 digitalWrite(PB7,HIGH);
 delay(tiempo);
 digitalWrite(PB7,LOW);
 delay(tiempo);
 digitalWrite(PB8,HIGH);
 delay(tiempo);
 digitalWrite(PB8,LOW);
 delay(tiempo);

 }

 //Segunda Secuencia 
 if(digitalRead(PB1)==0){
 digitalWrite(PB9,HIGH);
 delay(tiempo1);
 digitalWrite(PB9,LOW);
 delay(tiempo1);
 digitalWrite(PB4,HIGH);
 delay(tiempo1);
 digitalWrite(PB4,LOW);
 delay(tiempo1);
 digitalWrite(PB8,HIGH);
 delay(tiempo1);
 digitalWrite(PB8,LOW);
 delay(tiempo1);
 digitalWrite(PB5,HIGH);
 delay(tiempo1);
 digitalWrite(PB5,LOW);
 delay(tiempo1);
 digitalWrite(PB7,HIGH);
 delay(tiempo1);
 digitalWrite(PB7,LOW);
 delay(tiempo1);
 digitalWrite(PB6,HIGH);
 delay(tiempo1);
 digitalWrite(PB6,LOW);
 delay(tiempo1);

 digitalWrite(PB7,HIGH);
 delay(tiempo1);
 digitalWrite(PB7,LOW);
 delay(tiempo1);
 digitalWrite(PB5,HIGH);
 delay(tiempo1);
 digitalWrite(PB5,LOW);
 delay(tiempo1);
 digitalWrite(PB8,HIGH);
 delay(tiempo1);
 digitalWrite(PB8,LOW);
 delay(tiempo1);
 digitalWrite(PB4,HIGH);
 delay(tiempo1);
 digitalWrite(PB4,LOW);
 delay(tiempo1);
 digitalWrite(PB9,HIGH);
 delay(tiempo1);
 digitalWrite(PB9,LOW);
 delay(tiempo1);
 }

//Tercera Secuencia 
 if(digitalRead(PB10)==0){
 digitalWrite(PB9,HIGH);
 delay(tiempo1);
 digitalWrite(PB9,LOW);
 delay(tiempo1);
 digitalWrite(PB7,HIGH);
 delay(tiempo1);
 digitalWrite(PB7,LOW);
 delay(tiempo1);
 digitalWrite(PB5,HIGH);
 delay(tiempo1);
 digitalWrite(PB5,LOW);
 delay(tiempo1);
 digitalWrite(PB4,HIGH);
 delay(tiempo1);
 digitalWrite(PB4,LOW);
 delay(tiempo1);
 digitalWrite(PB6,HIGH);
 delay(tiempo1);
 digitalWrite(PB6,LOW);
 delay(tiempo1);
 digitalWrite(PB8,HIGH);
 delay(tiempo1);
 digitalWrite(PB8,LOW);
 delay(tiempo1);
 }

}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}