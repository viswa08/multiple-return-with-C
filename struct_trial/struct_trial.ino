
 struct numbers
 {
  int a = 10, b = 20, c, d;
 };

 struct numbers mathop;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}





int structureDemo();//invoke function before defining to work with structure

void loop() {
  // put your main code here, to run repeatedly:

 structureDemo();
 Serial.println(mathop.c);
 Serial.println(mathop.d);
 delay(2000); 
 
 
}

int structureDemo()
{
  int e = 50;
  mathop.c = mathop.a +mathop.b + e;
  mathop.d = mathop.b - mathop.a; 
}




