

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  int adc = analogRead(A1);
  Serial.println(adc);
  //converting the ada into real voltage
  
  
  
  float voltage = adc * 5/ 1023.0;
  //converting voltage into current
  float current = (voltage-2.5)/0.100;

  //just to make sure that the output is always positive
  //since there can't be a negative current
  
  if (current < 0){
    current = - current;
  }


  Serial.print("Current : ");
  Serial.print(current);
  //delay between each measurement




  delay(300);




}
