//Defino las notas
#define T_C 262
#define T_D 294
#define T_E 330
#define T_F 349
#define T_G 392
#define T_A 440
#define T_B 493

//Seteo el Pin para cada nota
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 8;
const int G = 9;
const int A = 10;
const int B = 11;

const int Buzz = 12;
const int LED = 13;

void setup() {
  // put your setup code here, to run once:

//Setup para los PinOuts/PinIns
pinMode(LED,OUTPUT);

pinMode(C,INPUT);
digitalWrite(C,LOW);

pinMode(D, INPUT);
digitalWrite(D,LOW);
  
pinMode(E, INPUT);
digitalWrite(E,LOW);

pinMode(F, INPUT);
digitalWrite(F,LOW);

pinMode(G, INPUT);
digitalWrite(G,LOW);

pinMode(A, INPUT);
digitalWrite(A,LOW);

pinMode(B, INPUT);
digitalWrite(B,LOW);

digitalWrite(LED,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
//While para que se reproduzca la nota cuando pulso el pulsador

 while(digitalRead(C) == HIGH)
  {
    tone(Buzz,T_C);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(D) == HIGH)
  {
    tone(Buzz,T_D);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(E) == HIGH)
  {
    tone(Buzz,T_E);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(F) == HIGH)
  {
    tone(Buzz,T_F);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(G) == HIGH)
  {
    tone(Buzz,T_G);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(A) == HIGH)
  {
   tone(Buzz,T_A);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(B) == HIGH)
  {
    tone(Buzz,T_B);
    digitalWrite(LED,HIGH);
  }
  
  noTone(Buzz);
  digitalWrite(LED,LOW);
}
