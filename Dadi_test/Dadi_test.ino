int diagonal1,diagonal2,vertical, center, lightSwitch;

void setup() {
  diagonal1 = 0;
  vertical = 1;
  diagonal2 = 2;
  center = 3;
  lightSwitch = 4;
  pinMode(diagonal1, OUTPUT);
  pinMode(vertical, OUTPUT);
  pinMode(diagonal2, OUTPUT);
  pinMode(center, OUTPUT);
  pinMode(lightSwitch, INPUT); 
}
void loop() {
  if(digitalRead == HIGH){
    for(int i = 0; i < 6; i++){
      show(i);
      delay(500);
    }
  }
}

void show(int pin){
    
    digitalWrite(diagonal1, LOW);
    digitalWrite(diagonal2, LOW);
    digitalWrite(vertical, LOW);
    digitalWrite(center, LOW);
    
  if(pin == 1){
    digitalWrite(center, HIGH);
  }else if(pin == 2){
    digitalWrite(diagonal1, HIGH);
  }else if(pin == 3){
    digitalWrite(center, HIGH);
    digitalWrite(diagonal1, HIGH);
  }else if(pin == 4){
    digitalWrite(diagonal1, HIGH);
    digitalWrite(diagonal2, HIGH);
  }else if(pin == 5){
    digitalWrite(diagonal1, HIGH);
    digitalWrite(diagonal2, HIGH);
    digitalWrite(center, HIGH);
  }else if(pin == 6){
    digitalWrite(diagonal1, HIGH);
    digitalWrite(diagonal2, HIGH);
    digitalWrite(vertical, HIGH);
  }
}

