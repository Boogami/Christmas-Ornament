#define PIN1    
#define PIN2   
#define PIN3   

int PinStates[][3] = {
  {1,0,-1},
  {0,1,-1},
  {-1,1,0},
  {-1,0,1},
  {1,-1,0},
  {0,-1,1}
};

void setup() {
}
void loop()
{
  for (int i = 0; i < 6; i++)
  {
    setPins(pinStates[i][0], pinStates[i][1], pinStates[i][2]); 
    delay(1000);
  }
}

void setPins(int p1, int p2, int p3)
{
  setPin(pin1, p1);
  setPin(pin2, p2);
  setPin(pin3, p3);
}

void setPin(int pin, int value)
{
  if (value == -1)
  {
    pinMode(pin, INPUT);
  }
  else
  {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, value);
  }
}
