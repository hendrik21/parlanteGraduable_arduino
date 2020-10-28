int salida = 2;
int potenciometro = A0;
float lectura;
int FreqMin = 100;
int FreqMax = 10000;

void setup () {

  pinMode(salida, OUTPUT);
  pinMode(potenciometro, INPUT);
}


void loop() {
  lectura = analogRead(potenciometro);
  float frecuencia = map(lectura, 0, 1023, FreqMin, FreqMax);
  tone(salida, frecuencia, 300);
  delay(1);
}
