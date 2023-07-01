#define vm 9
#define green 10
#define blue 11
void setup() {
 Serial.begin (9600);
 pinMode (3,OUTPUT);
 pinMode (9,OUTPUT);
 pinMode (10,OUTPUT);
 pinMode (11,OUTPUT);

}

void loop() {
 int pot= analogRead (0);
 int pwm= map (pot,0,1023,0,255);
 analogWrite (3,pwm);
 Serial.print ("VALOR PWM: ");
 Serial.println (pwm);
 if (pwm>200)
  {
    digitalWrite (vm,1);
    digitalWrite (blue,0);
    digitalWrite (green,0);
  }
 else if (pwm<50)
  {
    digitalWrite (blue,1);
    digitalWrite (vm,0);
    digitalWrite (green,0);
  }
 else
  {
    digitalWrite (green,1);
    digitalWrite (vm,0);
    digitalWrite (blue,0);
  }
 delay (100);

}
