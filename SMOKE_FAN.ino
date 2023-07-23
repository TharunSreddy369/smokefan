int smokepin = 8 ;
int fan      = 9;

void setup() {

pinMode(smokepin,INPUT);
pinMode(fan,OUTPUT);

Serial.begin(9600);

}

void loop() {
int smokeval = digitalRead(smokepin);
Serial.println(smokeval); 

 if(smokeval==1){
  digitalWrite(fan,HIGH);
  delay(1000);
 }
 else
 {
  digitalWrite(fan,LOW);
  delay(1000);
 }
}
