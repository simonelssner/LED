void setup()
{
 pinMode(13,OUTPUT);  //LED an ausgang 13 wird angesteuert
 Serial.begin(9600);
}
void loop() 
{
 digitalWrite(13,HIGH);       // LED wird auf an gesetzt
 Serial.println("LED an");    // auf der anzeige soll LED an stehen
 delay(2000);                 // Pause für 1 Sekunde ( hier in ms angegeben
 digitalWrite(13,LOW);        // LED wird auf aus gesetzt
 Serial.println("LED aus");   // auf der anzeige soll LED aus stehen
 delay(2000);                 // Pause für 1 Sekunde ( hier in ms angegeben
                              // SOS startet kurz
 digitalWrite(13,HIGH);       // LED wird auf an gesetzt
 delay(500);                  // Pause für 0,5 Sekunde ( hier in ms angegeben
 digitalWrite(13,LOW);        // LED wird auf aus gesetzt
 delay(500);                  // Pause für 0,5 Sekunde ( hier in ms angegeben
 digitalWrite(13,HIGH);       // LED wird auf an gesetzt
 delay(500);                  // Pause für 0,5 Sekunde ( hier in ms angegeben
 digitalWrite(13,LOW);        // LED wird auf aus gesetzt
 delay(500);                  // Pause für 0,5 Sekunde ( hier in ms angegeben
 digitalWrite(13,HIGH);       // LED wird auf an gesetzt
 delay(500);                  // Pause für 0,5 Sekunde ( hier in ms angegeben
 digitalWrite(13,LOW);        // LED wird auf aus gesetzt
 delay(500);                  // Pause für 0,5 Sekunde ( hier in ms angegeben
                              // SOS startet lang         
 digitalWrite(13,HIGH);       // LED wird auf an gesetzt
 delay(100);                  // Pause für 1 Sekunde ( hier in ms angegeben
 digitalWrite(13,LOW);        // LED wird auf aus gesetzt
 delay(100);                  // Pause für 1 Sekunde ( hier in ms angegeben      
  digitalWrite(13,HIGH);       // LED wird auf an gesetzt
 delay(100);                  // Pause für 1 Sekunde ( hier in ms angegeben
 digitalWrite(13,LOW);        // LED wird auf aus gesetzt
 delay(100);                  // Pause für 1 Sekunde ( hier in ms angegeben  
  digitalWrite(13,HIGH);       // LED wird auf an gesetzt
 delay(100);                  // Pause für 1 Sekunde ( hier in ms angegeben
 digitalWrite(13,LOW);        // LED wird auf aus gesetzt
 delay(100);                  // Pause für 1 Sekunde ( hier in ms angegeben              
}
