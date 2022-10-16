void setup() {
}

void red(int r){
  analogWrite(9, 255-r);
}
void green(int g){
  analogWrite(10, 255-g);
}
void blue(int b){
  analogWrite(11, 255-b);
}
void pulse(int color){
  // 9 is a red
  // 10 is a green
  // 11 is a blue
  for(int x=0; x <= 255;x++){
    analogWrite(color, x);
    delay(5);
  }
}
void pulse(int c1,int c2){
  // 9 is a red
  // 10 is a green
  // 11 is a blue
  for(int x=0; x <= 255;x++){
    analogWrite(c1, x);
    analogWrite(c2, x);
    delay(5);
  }
}
void pulse(int c1,int c2,int c3){
  // 9 is a red
  // 10 is a green
  // 11 is a blue
  for(int x=0; x <= 255;x++){
    analogWrite(c1, x);
    analogWrite(c2, x);
    analogWrite(c3, x);
    delay(5);
  }
}
void loop() {
  pulse(9);
  pulse(9,10);
  pulse(10);
  pulse(10,11);
  pulse(11);
  pulse(9,10,11);
}
