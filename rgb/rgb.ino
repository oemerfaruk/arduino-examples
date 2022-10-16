void setup() {
}
void led(int c1,int c2,int c3, int x, int y, int z){
  // 9 is a red
  // 10 is a green
  // 11 is a blue
  analogWrite(c1, 255-x);
  analogWrite(c2, 255-y);
  analogWrite(c3, 255-z);
}
void led(int c1,int c2, int x, int y){
  // 9 is a red
  // 10 is a green
  // 11 is a blue
  analogWrite(c1, 255-x);
  analogWrite(c2, 255-y);
}
void led(int c1, int x){
  // 9 is a red
  // 10 is a green
  // 11 is a blue
  analogWrite(c1, 255-x);
}
void pulse(int color, int d){
  // 9 is a red
  // 10 is a green
  // 11 is a blue
  for(int x=0; x <= 255;x++){
    analogWrite(color, x);
    delay(d);
  }
}
void pulse(int c1,int c2, int d){
  // 9 is a red
  // 10 is a green
  // 11 is a blue
  for(int x=0; x <= 255;x++){
    analogWrite(c1, x);
    analogWrite(c2, x);
    delay(d);
  }
}
void pulse(int c1,int c2,int c3, int d){
  // 9 is a red
  // 10 is a green
  // 11 is a blue
  for(int x=0; x <= 255;x++){
    analogWrite(c1, x);
    analogWrite(c2, x);
    analogWrite(c3, x);
    delay(d);
  }
}
void loop() {
  pulse(9,5);
  pulse(9,10,5);
  pulse(10,5);
  pulse(10,11,5);
  pulse(11,5);
  pulse(9,10,11,5);
}
