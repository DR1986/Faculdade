/* 
IoT - Internet das Coisas
Atividade Continua 2 - S.I. - 1D Noturno
Nome : Ramon C / Daniel R.
RA   : 1800260 / 1800479
Email : ramoncavpires@gmail.com / bruce-irom@hotmail.com

*/
int led = 13;
int entrada = 2;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(entrada, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
 int botao = digitalRead(entrada);
  
  if(botao == LOW){
    digitalWrite(led, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    delay(1000);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(1000);
  }else{
    digitalWrite(led, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } 
}