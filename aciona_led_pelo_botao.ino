

#define botao 10
#define led 13
bool estado;
void setup() {
 pinMode(botao, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
  estado=digitalRead(botao);// estado da entrada
  if(estado==0)//verifica botao
  {
  digitalWrite(led,1);   // acende 
  }
  else//                   
 { digitalWrite(led,0); }   // apaga 
 }
