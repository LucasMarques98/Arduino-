

#define botao 10
#define led 13// pino led
bool estado;
byte contagem=0;
void setup() {
pinMode(led,OUTPUT);
pinMode(botao, INPUT_PULLUP);
}

void loop() {
estado=digitalRead(botao);
if(estado==0)//verifica botao
  {
  delay (50);
  while(estado==0){
  estado=digitalRead(botao);}
  delay(50);
  contagem++;
 if(contagem==3)
   {         
  digitalWrite(led,1);    // acende
   }

 if(contagem>=4)

 
{           
  digitalWrite(led,0);    // acende
  contagem=0;
}
  }
}
