#define noPin 5;

int CPU_USAGE = 50;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  fancyStart();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(CPU_USAGE <= 20){
    digitalWrite(3, HIGH);
    for (int thisPin = 4; thisPin < 8; thisPin++) {
      digitalWrite(thisPin, LOW);
    }
  };
  if((CPU_USAGE >= 21) && (CPU_USAGE <= 40 )){
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    for (int thisPin = 5; thisPin < 8; thisPin++) {
      digitalWrite(thisPin, LOW);
    }
  }
  if((CPU_USAGE >= 41) && (CPU_USAGE <= 60 )){
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    for (int thisPin = 6; thisPin < 8; thisPin++) {
      digitalWrite(thisPin, LOW);
    }
  }
  if((CPU_USAGE >= 61) && (CPU_USAGE <= 80 )){
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    for (int thisPin = 7; thisPin < 8; thisPin++) {
      digitalWrite(thisPin, LOW);
    }
  }
   if(CPU_USAGE > 80){
    for (int thisPin = 3; thisPin < 8; thisPin++) {
      digitalWrite(thisPin, HIGH);
    }
  };
}
void fancyStart(){
   for (int thisPin = 3; thisPin < 8; thisPin++) {

    // turn the pin on:
    digitalWrite(thisPin, HIGH);
    delay(50);
  }
  delay(500);
  for(int endPin = 7 ; endPin >= 3; endPin--){
    digitalWrite(endPin, LOW);
    delay(100);
  }
}
