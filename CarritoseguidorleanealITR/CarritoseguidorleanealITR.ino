int Dermotor[2] = {3,6 };
int Izqmotor[2] = {11,9};
int infrarojos[3] = {A0, A1, A2};
float Estadosinf[3] = {0, 0, 0};
int Estadosen[3] = {0, 0, 0};
void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 2 ; i++) {
    pinMode(Dermotor[i], OUTPUT);
    pinMode(Izqmotor[i], OUTPUT);
  }
  for (int i = 0; i < 3 ; i++) {
    pinMode(infrarojos[i], INPUT);
  }
}

void loop() {
  Actuaalizarsensores();
  if ((Estadosen[0] == 1 && Estadosen[2] == 1) || (Estadosen[0] == 0 && Estadosen[2] == 0)) {
    analogWrite(Dermotor[0], 255);
    analogWrite(Dermotor[1], 0);
    analogWrite(Izqmotor[0], 255);
    analogWrite(Izqmotor[1], 0);
  }
  else if ((Estadosen[0] == 1) || (Estadosen[0] == 1 && Estadosen[1] == 1)) {
    digitalWrite(Dermotor[0], LOW);
    digitalWrite(Dermotor[1], LOW);
    digitalWrite(Izqmotor[0], HIGH);
    digitalWrite(Izqmotor[1], LOW);
  }
  else if ((Estadosen[2] == 1) || (Estadosen[2] == 1 && Estadosen[1] == 1)) {
    digitalWrite(Dermotor[0], HIGH);
    digitalWrite(Dermotor[1], LOW);
    digitalWrite(Izqmotor[0], LOW);
    digitalWrite(Izqmotor[1], LOW);
  }
  else {
    digitalWrite(Dermotor[0], HIGH);
    digitalWrite(Dermotor[1], LOW);
    digitalWrite(Izqmotor[0], HIGH);
    digitalWrite(Izqmotor[1], LOW);
  }



  delay(100);
}


void Actuaalizarsensores() {
  for (int i = 0; i < 3 ; i++) {
    Estadosinf[i] = analogRead(infrarojos[i]);
    if (Estadosinf[i] > 100) {
      Estadosen[i] = 1;
    }
    else {
      Estadosen[i] = 0;
    }
    Serial.print(" S");
    Serial.print(i + 1);
    Serial.print(" ");
    Serial.print(Estadosen[i]);

  }
  Serial.println();
}


