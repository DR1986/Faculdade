/* 
IoT - Internet das Coisas
Atividade Continua 4 - S.I. - 1D Noturno
Nome : Ramon C / Daniel R.
RA   : 1800260 / 1800479
Email : ramoncavpires@gmail.com / bruce-irom@hotmail.com

*/

#include <EEPROM.h>
int pin = 2;
int contador = 0;

void setup()
{ 
  pinMode(pin, INPUT);
  attachInterrupt(digitalPinToInterrupt(pin),conta,FALLING);
  Serial.begin(9600);
}

void loop()
{
  digitalRead(pin);
  Serial.print("O valor da EEPROM = ");
  Serial.println(EEPROM.read(100));
  delay(1000);
}

void conta(){
  contador ++;
  EEPROM.write(100, contador);
}