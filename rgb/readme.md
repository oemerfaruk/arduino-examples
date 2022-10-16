# RGB
This example is basic RGB Led code. 
## Circuit
I used pin 9 10 and 11.

## Code
### Led Function
Led function for turn on the RGB Led. This funciton is overloading so you can see all the light combinations.

```
void led(int c1,int c2,int c3, int x, int y, int z){
  // 9 is a red
  // 10 is a green
  // 11 is a blue
  analogWrite(c1, 255-x);
  analogWrite(c2, 255-y);
  analogWrite(c3, 255-z);
}
```
```
//led(redPin,greenPin,bluePin,redValue,greenValue,blueValue)
led(9,10,11,255,255,255)
```
### Pulse Function
Pulse function for pulse effect for rgb led. This funciton is overloading so you can see all the light combinations.

```
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
```
````
//pulse(redPin,greenPin,bluePin,delayTime)
pulse(9,10,11,5)
````