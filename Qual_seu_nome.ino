void setup() {
  Serial.begin(9600);  
}
void loop() {
Serial.println("Qual seu nome?");
while (Serial.available() == 0) {} 
String teststr = Serial.readString();
teststr.trim();

Serial.print("seu nome é:");
Serial.println(teststr) ;
}
       
       
    
      
     
   
