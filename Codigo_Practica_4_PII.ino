#define Led1 2
#define Led2 3
#define Led3 4
#define Led4 5
#define Led5 6
#define Led6 7 
#define push_button_1 10
#define push_button_2 11

void setup() {
  Serial.begin(9600);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode(push_button_1, INPUT);
  pinMode(push_button_2, INPUT);
  Serial.println("Presione un boton"); 
}

void loop() {
  if(digitalRead(push_button_1) == HIGH) {
    Serial.println("Secuencia Velocidad 1");
    
    digitalWrite(Led1, HIGH);
    delay(500);
    digitalWrite(Led1, LOW);
    
    digitalWrite(Led2, HIGH);
    delay(500);
    digitalWrite(Led2, LOW);
    
    digitalWrite(Led3, HIGH);
    delay(500);
    digitalWrite(Led3, LOW);
    
    digitalWrite(Led4, HIGH);
    delay(500);
    digitalWrite(Led4, LOW);
    
    digitalWrite(Led5, HIGH);
    delay(500);
    digitalWrite(Led5, LOW); 
    
    digitalWrite(Led6, HIGH);
    delay(500);
    digitalWrite(Led6, LOW); 
    
  }
    
    if(digitalRead(push_button_2)== HIGH) {
    Serial.println("Secuencia Velocidad 2");
      
    digitalWrite(Led6, HIGH);
    delay(1000);
    digitalWrite(Led6, LOW); 
    
    digitalWrite(Led5, HIGH);
    delay(1000);
    digitalWrite(Led5, LOW);
  
    digitalWrite(Led4, HIGH);
    delay(1000);
    digitalWrite(Led4, LOW);
 
    digitalWrite(Led3, HIGH);
    delay(1000);
    digitalWrite(Led3, LOW);

    digitalWrite(Led2, HIGH);
    delay(1000);
    digitalWrite(Led2, LOW);               
                   
    digitalWrite(Led1, HIGH);
    delay(1000);
    digitalWrite(Led1, LOW); 
  }           
}
