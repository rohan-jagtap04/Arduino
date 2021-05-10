//Simple program for one round of blinking lights. 
//Ports used: GRN, 11, 12, 13
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
bool stop = false;


void setup() {
  pinMode(LED1, OUTPUT); 
  pinMode(LED2, OUTPUT); 
  pinMode(LED3, OUTPUT);  
}

void loop() {
  delay(200);
  digitalWrite(LED1, HIGH);
  delay(200);
  digitalWrite(LED2, HIGH);
  delay(200);
  digitalWrite(LED3, HIGH);
  delay(200);
  digitalWrite(LED1, LOW);
  delay(300);
  digitalWrite(LED2, LOW);
  delay(300);
  digitalWrite(LED3, LOW);
  delay(300);
  stop = true;

  while(stop){
    
  }
}
