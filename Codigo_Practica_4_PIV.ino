#define Push_bottom_1 2
#define Push_bottom_2 3

void setup() {
  Serial.begin(9600); 
  pinMode(Push_bottom_1, INPUT);
  pinMode(Push_bottom_2, INPUT);
}

void loop() {
  if (digitalRead(Push_bottom_1) == LOW) { 
    for (int i = 0; i <= 99; i++) {
     Serial.println(i);
     delay(500);
    }
  }
  if (digitalRead(Push_bottom_2) == LOW) { 
    for (int i = 99; i >= 0; i--) {
     Serial.println(i);
     delay(500);
    }
  }
}
