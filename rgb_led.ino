int R=0;
int G=255;
int B=255 ;
void setup () {
pinMode (9,OUTPUT);
pinMode (10,OUTPUT);
pinMode (11,OUTPUT);
analogWrite (9, G);
analogWrite (10,B);
analogWrite (11,R);
}
void loop () {}