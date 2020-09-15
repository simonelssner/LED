#define LED     13                // onboard LED
#define Taster  9                 // Pulldown und UP
#define Taster2 8
void setup()
{
  pinMode(LED, OUTPUT);           //LED an ausgang 13 wird angesteuert
  pinMode(Taster, INPUT);
  pinMode(Taster2, INPUT);
}
void loop()
{
  if (digitalRead(Taster) == 1) && (Taster2) == 1)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}
