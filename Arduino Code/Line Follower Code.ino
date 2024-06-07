int in1=2;
int in2=3;
int in3=4;
int in4=5;
int ena=9;
int enb=10;
int lefts=7;
int rights=8;
char reading;
int rleft;
int rright;

void setup() {
  // put your setup code here, to run once:
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(ena,OUTPUT);
pinMode(enb,OUTPUT);
pinMode(lefts,INPUT);
pinMode(rights,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  rleft=digitalRead(lefts);
    rright=digitalRead(rights);

  Serial.println(rleft);
    Serial.println(rright);

  
if(rleft==1 && rright==1) {
  forward();
}
else if (rleft==1 && rright==0) {
  right();
}
else if(rleft==0 && rright==1) {
  left();
}
else if(rleft==0 && rright==0) {
  stopp();
}
}
void forward() {
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
analogWrite(ena,55);
analogWrite(enb,55);
}
void backward() {
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
analogWrite(ena,55);
analogWrite(enb,55);
}
void right() {
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
analogWrite(ena,25);
analogWrite(enb,55);
}
void left() {
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
analogWrite(ena,55);
analogWrite(enb,15);
}
void stopp() {
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
analogWrite(ena,0);
analogWrite(enb,0);
}