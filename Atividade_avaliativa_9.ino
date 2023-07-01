#define vm 9
#define green 10
#define blue 11
void setup() {
 Serial.begin (9600);
 pinMode (9,OUTPUT);
 pinMode (10,OUTPUT);
 pinMode (11,OUTPUT);

}

void loop() {
 int pot= analogRead (0);
 int potb= analogRead (1);
 int potc= analogRead (2);
 int pwm= map (pot,0,1023,0,255); //dá pra fazer isso sem o map, só colocar o pot como "pot/4", as if 1023/4.
 int pwmb= map (potb,0,1023,0,255);
 int pwmc= map (potc,0,1023,0,255);
 analogWrite (vm,pwm);
 analogWrite (green,pwmb);
 analogWrite (blue,pwmc);
 Serial.print ("R [");
 Serial.print (pwm);
 Serial.print ("] ");
 Serial.print ("G [");
 Serial.print (pwmb);
 Serial.print ("] ");
 Serial.print ("B [");
 Serial.print (pwmc);
 Serial.print ("] ");
 Serial.println (" ");
 delay (100);

}
