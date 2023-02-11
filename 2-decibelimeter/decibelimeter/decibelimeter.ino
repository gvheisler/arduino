int pin1 = A0; 
int pin2 = A1; 
int pin3 = A2; 
int pin4 = A3;
int maior = 0;
 
void setup ()  
{   
  pinMode (pin1, INPUT);
  pinMode (pin2, INPUT);
  pinMode (pin3, INPUT);
  pinMode (pin4, INPUT);
  Serial.begin (9600); 
}  
   
void loop (){
  Serial.print(" | ");
  Serial.print (analogRead(pin1));
  Serial.print(" | ");
  Serial.print (analogRead(pin2));
  Serial.print(" | ");
  Serial.print (analogRead(pin3)); 
  Serial.print(" | ");
  Serial.print (analogRead(pin4));
  Serial.print(" | ");
  Serial.print("\n");
  //delay(1000);
}