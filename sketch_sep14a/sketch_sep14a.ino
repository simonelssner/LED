#define LED     13                // onboard LED
#define Taster  9                 // Pulldown und UP
#define LEDROT     14
void setup()
{
 pinMode(LED,OUTPUT);  //LED an ausgang 13 wird angesteuert
 pinMode(LEDROT,OUTPUT);  //LED an ausgang 14 wird angesteuert
 pinMode(Taster,INPUT);
}
void loop() 
{
  if(digitalRead(Taster) == 1)
   {
    digitalWrite(LED, HIGH); 
   }
   else
   {
    digitalWrite(LED, LOW);
   }
     if(digitalRead(Taster) == 0)
   {
    digitalWrite(LEDROT, HIGH); 
   }
   else
   {
    digitalWrite(LEDROT, LOW);
   }
}
