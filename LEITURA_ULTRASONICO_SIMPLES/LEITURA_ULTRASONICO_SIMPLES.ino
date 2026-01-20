int Trig = 22;
int Echo = 23;

void setup() 
{
  Serial.begin (9600);
  pinMode(Trig,OUTPUT);
  pinMode(Echo,INPUT);
}

void loop() 
{
  long duracion;
  long distancia;
  
  digitalWrite(Trig,LOW);
  delayMicroseconds(2);
  digitalWrite(Trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig,LOW);
  
  duracion = pulseIn(Echo,HIGH);
  distancia = (duracion/2)/29;

  Serial.println(distancia);

  delay(100);
}
