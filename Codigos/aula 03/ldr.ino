

int ledPinSeis = 6; //Led no pino 6 
int ledPinSete = 7; //Led no pino 7
int ldrPin = 0; //LDR no pino analígico 8
int ldrValor = 0; //Valor lido do LDR
 
//Declaração de Variáveis *globais*.
void setup() 
{
   pinMode(ledPinSeis,OUTPUT); //define a porta 6 como saída
   pinMode(ledPinSete,OUTPUT); //define a porta 7 como saída
   Serial.begin(9600); //Inicia a comunicação serial
}
 
void loop()
{
 ldrValor = analogRead(ldrPin);  ///ler o valor do LDR, vale lembrar que o valor lido será entre 0 e 1023
 
//Se o valor lido for maior que 600(valor ajustável), liga o led pin 7 e apaga o ledpin 6
if (ldrValor>= 600)
{
  digitalWrite(ledPinSete,HIGH);
  digitalWrite(ledPinSeis,LOW);
} 
 //Senão, apaga o apaga o led pin 7 e liga o ledpin 6
else
{
  digitalWrite(ledPinSete,LOW);
  digitalWrite(ledPinSeis,HIGH);
} 
 
 Serial.println(ldrValor); //imprime o valor LDR(ldrValor) no monitor serial

 delay(100); //dealy em milissegundos
 
}
