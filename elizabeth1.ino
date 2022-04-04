int red = 0; 
int yellow = 1; 
int green = 2;  

void setup() {
 
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  
  digitalWrite(red, LOW); 
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(30000);    
  
  
  digitalWrite(red, LOW);   
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  delay(1000);   
  
  
  digitalWrite(red, HIGH);  
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(30000); 
  
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  delay(1000);
}
