const int botao1 = 3;
const int botao2 = 4;
const int botao3 = 5;
const int botao4 = 6;
const int botao5 = 7;

int var1;
int var2;
int var3;
int var4;
int var5;

 void setup()
 { 
      pinMode(botao1, INPUT);
      pinMode(botao2, INPUT);
      pinMode(botao3, INPUT); 
      pinMode(botao4, INPUT); 
      pinMode(botao5, INPUT); 
      Serial.begin(9600);
 }
 


 void loop()
 {
    
var1 = digitalRead(botao1);
var2 = digitalRead(botao2);
var3 = digitalRead(botao3);
var4 = digitalRead(botao4);
var5 = digitalRead(botao5);
   //Serial.println(var1);

 if (var1){
   Serial.println("Sou bonito");
 }

 if (var2){
   Serial.println("Sou gostoso");
 }

 if (var3){
   Serial.println("Jogo bola");
 }

 if (var4){
   Serial.println("e Danco");
 }

 if (var5){
   Serial.println("By pessottaooo");
 }
 }