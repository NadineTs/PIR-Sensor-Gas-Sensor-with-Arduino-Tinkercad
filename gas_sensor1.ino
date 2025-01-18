int LED =13;
int MQ2pin =A0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float sensorValue;
  sensorValue = analogRead(MQ2pin);
  if(sensorValue>=250)
  {
    digitalWrite(LED,HIGH);
    Serial.print(sensorValue);
    Serial.println("   Gas Detected");
  }
  else
  {
    digitalWrite(LED,LOW);
    Serial.println("Sensor value: ");
    Serial.println(sensorValue);
  }
  delay(1000);
  
}   