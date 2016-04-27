int Dermotor[2] = {3, 6};
int Izqmotor[2] = {9, 11};
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
  

  delay(1000);
}
