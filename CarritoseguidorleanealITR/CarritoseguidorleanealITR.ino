int derpin1 = 2;
int derpin2 = 3;
int izqpin1 =  4;
int izqpin2 = 5;
int izqinfra = 6;
int derinfra = 7;
int ceninfra = 8;
int Valorinfra = 0;
void setup() {
  pinMode(derpin1,OUTPUT);
  pinMode(derpin2,OUTPUT);
  pinMode(izqpin1,OUTPUT);
  pinMode(izqpin2,OUTPUT);
  pinMode(izqinfra,INPUT);
  pinMode(derinfra,INPUT);
  pinMode(ceninfra,INPUT);


}

void loop() {
  if (Valorinfra = digitalRead(ceninfra)){
    
  digitalWrite(derpin1,Valorinfra);
  digitalWrite(izqpin2,Valorinfra);

  }
  else {
    digitalWrite(derpin1,LOW);
  digitalWrite(derpin2,LOW);
  digitalWrite(izqpin1,LOW);
  digitalWrite(izqpin2,LOW);
  }


   
 if (Valorinfra = digitalRead(izqinfra)) {
   digitalWrite(izqpin1,Valorinfra);
   digitalWrite(izqpin2,Valorinfra);
   digitalWrite(derpin1,LOW);
   digitalWrite(derpin2,LOW);
 }
  else {
    digitalWrite(derpin1,LOW);
  digitalWrite(derpin2,LOW);
  digitalWrite(izqpin1,LOW);
  digitalWrite(izqpin2,LOW);
  }

if(Valorinfra = digitalRead(derinfra)){
  digitalWrite(derpin1,Valorinfra);
  digitalWrite(derpin2,Valorinfra);
  digitalWrite(izqpin1,LOW);
  digitalWrite(izqpin2,LOW);
}
 else {
    digitalWrite(derpin1,LOW);
  digitalWrite(derpin2,LOW);
  digitalWrite(izqpin1,LOW);
  digitalWrite(izqpin2,LOW);
  }
if(Valorinfra = !Valorinfra){
digitalWrite(derpin1,LOW);
  digitalWrite(derpin2,LOW);
  digitalWrite(izqpin1,LOW);
  digitalWrite(izqpin2,LOW);
}
 else {
    digitalWrite(derpin1,LOW);
  digitalWrite(derpin2,LOW);
  digitalWrite(izqpin1,LOW);
  digitalWrite(izqpin2,LOW);
  }


}
