byte led[8]={2,3,4,5,6,7,8,9};
byte light[5]={
  B11001110, 
  B10110110,
  B10000110,
  B01001110,
  B00101110};
char x;
void setup() {
  for(byte i=0;i<8;i++){
    pinMode(led[i],OUTPUT);
  }
Serial.begin(9600);



}

void loop() {
  if (Serial.available()>0){
    x=Serial.read();
    for(byte i=0;i<8;i++){
     digitalWrite(led[i],x&B00000001<<i);
    }delay(500);
  }
}