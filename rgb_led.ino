#define RED 11
#define GREEN 10
#define BLUE 9
#define DELAY_TIME 2

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void transition(int color_start, int color_end)
{
  for(int i = 0; i < 256; i++)
  {
    analogWrite(color_start, 255 - i);
    analogWrite(color_end, i);
    delay(DELAY_TIME);
  }
}

void loop() {
  transition(RED, BLUE);
  transition(BLUE, GREEN);
  transition(GREEN, RED);
}
