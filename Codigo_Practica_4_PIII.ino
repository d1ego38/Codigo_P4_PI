#define push_buttom_1 2 
#define push_buttom_2 3
#define push_buttom_3 4
#define push_buttom_4 5
#define Led1 A0
#define Led2 A1
#define Led3 A2
#define Led4 A3
#define Led5 A4
#define Led6 A5


void setup() {
  Serial.begin(9600);
  pinMode(push_buttom_1, INPUT);
  pinMode(push_buttom_2, INPUT);
  pinMode(push_buttom_3, INPUT);
  pinMode(push_buttom_4, INPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  Serial.println("Presione un boton"); 
}

void loop() {
  if(digitalRead(push_buttom_1) == LOW){
    Serial.println("Practica No.4 Diego Yos");
    delay(800);
  }
  if(digitalRead(push_buttom_2) == LOW){
    Serial.println("Inicia secuencia de leds");
    
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
  if(digitalRead(push_buttom_3) == LOW){
    Serial.println("Cuatro");
    
  //C
  delay(1000);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(2000);
  //U
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(2000);
  //A
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(2000);
  //T
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  delay(2000);
  //R
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(2000);
  //O
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(2000);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
}
  if(digitalRead(push_buttom_1) && digitalRead(push_buttom_3) == LOW){
    Serial.println("Gracias Por Su Atencion");
    delay(500);
  }
  if(digitalRead(push_buttom_2) && digitalRead(push_buttom_4) == LOW){
    Serial.println("Gracias Por Su Atencion");
    delay(500);
  }
  
}
    
