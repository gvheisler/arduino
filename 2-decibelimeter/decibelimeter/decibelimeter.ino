 
int pinSom = A0; 
long soma = 0 ;
int media;
 
void setup ()  
{   
  pinMode (pinSom, INPUT);  
  Serial.begin (9600); 
}  
   
void loop (){  
  for ( int i = 0 ; i <1000; i ++){
    soma = soma + analogRead(pinSom);
    delay(1);
  }
  media = soma / 1000;
  Serial.print("Sound Level: ");
  Serial.println (media);  
  soma = 0 ;
}