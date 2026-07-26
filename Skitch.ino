// First L293D
const int ENA1 = 5;
const int IN1 = 2;
const int IN2 = 3;
const int ENB1 = 6;
const int IN3 = 4;
const int IN4 = 7;

// Second L293D
const int ENA2 = 8;
const int IN5 = 9;
const int IN6 = 10;
const int ENB2 = 11;
const int IN7 = 12;
const int IN8 = 13;

void setup() {

  int pins[] = {ENA1,IN1,IN2,ENB1,IN3,IN4,ENA2,IN5,IN6,ENB2,IN7,IN8};

  for(int i=0;i<12;i++)
    pinMode(pins[i],OUTPUT);

}

void forward(){

  digitalWrite(IN1,HIGH); digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH); digitalWrite(IN4,LOW);

  digitalWrite(IN5,HIGH); digitalWrite(IN6,LOW);
  digitalWrite(IN7,HIGH); digitalWrite(IN8,LOW);

  digitalWrite(ENA1,HIGH);
  digitalWrite(ENB1,HIGH);
  digitalWrite(ENA2,HIGH);
  digitalWrite(ENB2,HIGH);
}

void backward(){

  digitalWrite(IN1,LOW); digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW); digitalWrite(IN4,HIGH);

  digitalWrite(IN5,LOW); digitalWrite(IN6,HIGH);
  digitalWrite(IN7,LOW); digitalWrite(IN8,HIGH);
}

void right(){

  digitalWrite(IN1,HIGH); digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW); digitalWrite(IN4,HIGH);

  digitalWrite(IN5,HIGH); digitalWrite(IN6,LOW);
  digitalWrite(IN7,LOW); digitalWrite(IN8,HIGH);
}

void left(){

  digitalWrite(IN1,LOW); digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH); digitalWrite(IN4,LOW);

  digitalWrite(IN5,LOW); digitalWrite(IN6,HIGH);
  digitalWrite(IN7,HIGH); digitalWrite(IN8,LOW);
}

void loop() {

  forward();
  delay(30000);

  backward();
  delay(60000);

  unsigned long t = millis();

  while(millis()-t < 60000){

    right();
    delay(2000);

    left();
    delay(2000);

  }
}
