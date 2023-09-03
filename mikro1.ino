int led1 = 13;// Inisialisasi pin yang terhubung dengan led1
int led2 = 12;// Inisialisasi pin yang terhubung dengan led2
int button = 2;// Inisialisasi pin yang terhubung dengan tombol
bool ledNyala = false; // Status Led
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState1 = digitalRead(button);
  if (buttonState1 == LOW)
  {
    delay(100);
    if(!ledNyala){
      ledNyala = true;
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
    }else
    {
      ledNyala = false;
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
    }
    while(digitalRead(button)== LOW){
    }
  }
}
