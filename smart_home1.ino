byte led[8]={2,3,4,5,6,7,8,9};
byte light[5]={
  B01110011, // s
  B01101101, // m
  B01100001, // a
  B01110010, // r
  B01110100}; // t
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
     digitalWrite(led[i],x&1<<i);
    }delay(500);
  }
}
