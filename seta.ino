// C++ code
//

const int btn1 = 0;
const int btn2 = 1;
const int btn3 = 2;
  
int cond = 0;
int cond2 = 1;
int cond3 = 2;
  
void setup()
{
  pinMode(6, OUTPUT);//seta1
  pinMode(5, OUTPUT);//seta2
  pinMode(3, INPUT);//seta3
  pinMode(4, INPUT);//seta4
  pinMode(btn1, INPUT); 
  pinMode(btn2, INPUT);
  pinMode(btn3,INPUT);
    
}
void loop()
{
  
 cond = digitalRead(btn1);
  
  if(cond == HIGH) 
  
    
  digitalWrite(6, HIGH);//seta1
  digitalWrite(5, HIGH);//seta2
  digitalWrite(3, LOW);//seta3
  digitalWrite(4, LOW);//seta4 
  delay(5000); // Wait for 1000 millisecond(s)
  
  digitalWrite(6, LOW);//seta1
  digitalWrite(5, LOW);//seta2
  digitalWrite(3, HIGH);//seta3
  digitalWrite(4, HIGH);//seta4
  delay(5000); // Wait for 1000 millisecond(s)

  
 cond2 = digitalRead(btn2);
  
  if(cond2 == HIGH) 
  
    
  digitalWrite(6, LOW);//seta1
  digitalWrite(5, LOW);//seta2
  digitalWrite(3, LOW);//seta3
  digitalWrite(4, LOW);//seta4 
  delay(5000); // Wait for 1000 millisecond(s)
  
  digitalWrite(6, HIGH);//seta1
  digitalWrite(5, HIGH);//seta2
  digitalWrite(3, HIGH);//seta3
  digitalWrite(4, HIGH);//seta4
  delay(5000); // Wait for 1000 millisecond(s)

  
 cond3 = digitalRead(btn3);
  
  if(cond3 == HIGH) 
  
    
  digitalWrite(6, HIGH);//seta1
  digitalWrite(5, HIGH);//seta2
  digitalWrite(3, LOW);//seta3
  digitalWrite(4, LOW);//seta4 
  delay(5000); // Wait for 1000 millisecond(s)
  
  digitalWrite(6, LOW);//seta1
  digitalWrite(5, LOW);//seta2
  digitalWrite(3, HIGH);//seta3
  digitalWrite(4, HIGH);//seta4
  delay(5000); // Wait for 1000 millisecond(s)
}
