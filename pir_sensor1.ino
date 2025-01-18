// C++ code
//
int input = 0;

void setup()
{
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop()
{
  input = digitalRead(4);
  Serial.println(input);
  delay(10); // Delay a little bit to improve simulation performance
}