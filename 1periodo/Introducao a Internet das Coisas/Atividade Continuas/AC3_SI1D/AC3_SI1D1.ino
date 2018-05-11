/* 
IoT - Internet das Coisas
Atividade Continua 3 - S.I. - 1D Noturno
Nome : Ramon C / Daniel R.
RA   : 1800260 / 1800479
Email : ramoncavpires@gmail.com / bruce-irom@hotmail.com
*/

#include <EEPROM.h>

int dia = 10;
int mes = 10;
int ano = 10;
int endereco= 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 EEPROM.write(endereco,dia);
 EEPROM.write(endereco +1, mes);
 EEPROM.write(endereco +2,ano);
  
 delay(100); 
 Serial.print(" A data inserida e: ");
 Serial.print("\t");
 Serial.print(dia);
 Serial.print("/");
 Serial.print(mes);
 Serial.print("/");
 Serial.print("20");
 Serial.print(ano);
 Serial.println(); 
  
 delay(2000);

}