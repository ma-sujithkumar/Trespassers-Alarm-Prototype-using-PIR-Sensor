int sensor_input; //for getting input from the sensor
char ch; //to read input from the serial monitor
void setup()
{
  pinMode(6, OUTPUT); //buzzer
  pinMode(12, INPUT); //pir sensor
  Serial.begin(9600);
}

void loop()
{
  sensor_input=digitalRead(12); //reading sensor input
  if (sensor_input==1)
  {
    tone(6,523);
    Serial.println("Somebody trespassers, Press 1 to stop the alarm");
    if(Serial.available()) //checking buffer values
    {
      ch=Serial.read();
    if(ch=='1') //if the user wants to stop the alarm
    {
      noTone(6);
    }
    }
  }
  else
  {
    noTone(6);
  }
  
  
  // // play tone 60 (C5 = 523 Hz)
}