const int buzzerPin = 13;
const int flamePin = 11;
int Flame = HIGH;

void setup() 
{
  
  pinMode(buzzerPin, OUTPUT);
  pinMode(flamePin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  Flame = digitalRead(flamePin);
  if (Flame== LOW)
  {
    Serial.println("Fire!!!");
    digitalWrite(buzzerPin, HIGH);
    delay(500);
  }
  else
  {
    Serial.println("No worries");
    digitalWrite(buzzerPin, LOW);
    delay(500);
  }
}
