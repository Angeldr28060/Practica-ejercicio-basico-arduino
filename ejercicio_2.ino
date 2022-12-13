int leds[]={3,4,5,6,7,8};//semaforo 1 y 2 (rojo, amarillo, verde)
int tiempo1=3000;
int tiempo2=500;
int n;
void setup() {
for (n=0;n<6;n++) {
pinMode (leds[n],OUTPUT);
}}

void secuencia(){
digitalWrite (leds[1],LOW);  
digitalWrite (leds[0],HIGH);
digitalWrite (leds[3],LOW);
digitalWrite (leds[5],HIGH);
delay (3000);
digitalWrite (leds[5],LOW);
digitalWrite (leds[4],HIGH);
delay (3000);
digitalWrite(leds[0],LOW);
digitalWrite (leds[2],HIGH);
digitalWrite (leds[4],LOW);
digitalWrite (leds[3],HIGH);
delay (3000);
digitalWrite (leds[2],LOW);
digitalWrite(leds[1],HIGH);
delay (3000);
}

void loop () {
  secuencia();
}
