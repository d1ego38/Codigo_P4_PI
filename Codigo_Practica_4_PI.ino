#define push_bottom_1 2 
#define push_bottom_2 3
#define push_bottom_3 4
int pines[4] = {5, 6, 7, 8};

void setup() {
  pinMode(push_bottom_1, INPUT);
  pinMode(push_bottom_2, INPUT);
  pinMode(push_bottom_3, INPUT);
  for(int p = 0; p < 4 ; p++){
    pinMode(pines[p], OUTPUT);
  }
}

void loop(){
  for(int b = 0; b < 10; b++){
    for(int c = 0; c < 4; c++){
      digitalWrite(pines[c], (b >> c) & 1);
    }
    
    if(digitalRead(push_bottom_1) == HIGH){
      delay(1000);
    }
    
    else if(digitalRead(push_bottom_2) == HIGH){
      delay(2000);
    }
   
    else if(digitalRead(push_bottom_3) == HIGH){
      delay(3000);
    }
    
    else if(digitalRead(push_bottom_1) && digitalRead(push_bottom_2) && digitalRead(push_bottom_3) == HIGH){
     delay(500);
    }
    
    else if(digitalRead(push_bottom_1) && digitalRead(push_bottom_2) && digitalRead(push_bottom_3) == LOW){
     delay(500);
    }
    
    delay(500);
  }
}
