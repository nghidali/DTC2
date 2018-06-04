//lights
int btnPin = 14;
int exhalePin = 15;
int holdPin = 20;
int inhalePin = 17;
int waitPin = 19;
int dosePin = 12;
int sensorPin = 5;
int emitterPin = 10;
int sensorState = 0;
 
int btnState = 0;
int doseState = 0;
 
void setup() {
 
  pinMode(btnPin,INPUT_PULLUP);
  pinMode(dosePin,INPUT_PULLUP);
  pinMode(sensorPin,INPUT_PULLUP);
  pinMode(emitterPin, OUTPUT);
  pinMode(exhalePin, OUTPUT);
  pinMode(holdPin, OUTPUT);
  pinMode(inhalePin, OUTPUT);
  pinMode(waitPin, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  digitalWrite(emitterPin, HIGH);
  btnState = digitalRead(btnPin);
  doseState = digitalRead(dosePin);
  sensorState = digitalRead(sensorPin);
 
  if(sensorState == HIGH && doseState == LOW){
    oneDose();
  } 
  if(sensorState == HIGH && doseState == HIGH){
    twoDose();
  }
}
void oneDose(){
 
  //delay
  delay(3000);
 
  //exhale for 5 seconds
  digitalWrite(exhalePin, HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  digitalWrite(exhalePin,LOW);
 
  //inhale for 4 seconds
  digitalWrite(inhalePin,HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  digitalWrite(inhalePin,LOW);
 
  //hold for 7.5 seconds
  digitalWrite(holdPin, HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  digitalWrite(holdPin,LOW);
 
  //exhale for 5 seconds
  digitalWrite(exhalePin, HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  digitalWrite(exhalePin,LOW);
 
  digitalWrite(exhalePin, HIGH);
  digitalWrite(inhalePin,HIGH);
  digitalWrite(holdPin, HIGH);
  digitalWrite(waitPin, HIGH);
  delay(300);
  digitalWrite(exhalePin, LOW);
  digitalWrite(inhalePin,LOW);
  digitalWrite(holdPin, LOW);
  digitalWrite(waitPin, LOW);
  delay(300);
 
  digitalWrite(exhalePin, HIGH);
  digitalWrite(inhalePin,HIGH);
  digitalWrite(holdPin, HIGH);
  digitalWrite(waitPin, HIGH);
  delay(300);
  digitalWrite(exhalePin, LOW);
  digitalWrite(inhalePin,LOW);
  digitalWrite(holdPin, LOW);
  digitalWrite(waitPin, LOW);
  delay(300);
 
  digitalWrite(exhalePin, HIGH);
  digitalWrite(inhalePin,HIGH);
  digitalWrite(holdPin, HIGH);
  digitalWrite(waitPin, HIGH);
  delay(300);
  digitalWrite(exhalePin, LOW);
  digitalWrite(inhalePin,LOW);
  digitalWrite(holdPin, LOW);
  digitalWrite(waitPin, LOW);
  delay(60000);
}
 
void twoDose(){
 
  //delay
  delay(3000);
 
  //exhale for 5 seconds
  digitalWrite(exhalePin, HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  digitalWrite(exhalePin,LOW);
 
  //inhale for 4 seconds
  digitalWrite(inhalePin,HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  digitalWrite(inhalePin,LOW);
 
  //hold for 7.5 seconds
  digitalWrite(holdPin, HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  digitalWrite(holdPin,LOW);
 
  //exhale for 5 seconds
  digitalWrite(exhalePin, HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  digitalWrite(exhalePin,LOW);
 
  digitalWrite(waitPin, HIGH);
  delay(30000);
  digitalWrite(waitPin, LOW);
 
  //exhale for 5 seconds
  digitalWrite(exhalePin, HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  digitalWrite(exhalePin,LOW);
 
  //inhale for 4 seconds
  digitalWrite(inhalePin,HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(inhalePin, LOW);
      return;
  }
  digitalWrite(inhalePin,LOW);
 
  //hold for 7.5 seconds
  digitalWrite(holdPin, HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(holdPin, LOW);
      return;
  }
  digitalWrite(holdPin,LOW);
 
  //exhale for 5 seconds
  digitalWrite(exhalePin, HIGH);
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  delay(250);
  btnState = digitalRead(btnPin);
  if (btnState == LOW){
      digitalWrite(exhalePin, LOW);
      return;
  }
  digitalWrite(exhalePin,LOW);
 
  digitalWrite(exhalePin, HIGH);
  digitalWrite(inhalePin,HIGH);
  digitalWrite(holdPin, HIGH);
  digitalWrite(waitPin, HIGH);
  delay(300);
  digitalWrite(exhalePin, LOW);
  digitalWrite(inhalePin,LOW);
  digitalWrite(holdPin, LOW);
  digitalWrite(waitPin, LOW);
  delay(300);
 
  digitalWrite(exhalePin, HIGH);
  digitalWrite(inhalePin,HIGH);
  digitalWrite(holdPin, HIGH);
  digitalWrite(waitPin, HIGH);
  delay(300);
  digitalWrite(exhalePin, LOW);
  digitalWrite(inhalePin,LOW);
  digitalWrite(holdPin, LOW);
  digitalWrite(waitPin, LOW);
  delay(300);
 
  digitalWrite(exhalePin, HIGH);
  digitalWrite(inhalePin,HIGH);
  digitalWrite(holdPin, HIGH);
  digitalWrite(waitPin, HIGH);
  delay(300);
  digitalWrite(exhalePin, LOW);
  digitalWrite(inhalePin,LOW);
  digitalWrite(holdPin, LOW);
  digitalWrite(waitPin, LOW);
  delay(60000);
}
