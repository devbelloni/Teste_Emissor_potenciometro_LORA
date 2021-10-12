int sensor=A0;
int   leitura =0;
 
void setup() {
  Serial.begin(9600);
}

void loop() {
leitura=map(analogRead(sensor),0,1023,0,100);
int   leitura = analogRead(sensor);
Serial.write(leitura);
delay(200);
}
