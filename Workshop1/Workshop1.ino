void setup() {
  // put your setup code h ere, to run once:
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
static int delay1 = 50;
static int delay2 = delay1 - 50;
static int delay3 = delay2 - 75;






digitalWrite(9, HIGH);
delay(delay1);
digitalWrite(8,HIGH);
delay(delay1);
digitalWrite(7, HIGH);
delay(delay1);

digitalWrite(9,0);
delay(delay1);
digitalWrite(8,0);
delay(delay1);
digitalWrite(7,0);
delay(delay1);







}
