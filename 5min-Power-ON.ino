#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
#define PowerPin 3
int ReadPower = 2;
int DelayTime = 3000;
unsigned long time[2] = {0,0};  //記錄運行時間

void setup() {
  Serial.begin(115200);
  pinMode(ReadPower, INPUT);
  pinMode(PowerPin, OUTPUT);
   lcd.begin(16, 2);              // start the library
 lcd.setCursor(0,0);
 lcd.print("Push the buttons");
}

void loop() {

  int PowerState = digitalRead(ReadPower);
  

  //delay(1);        // delay in between reads for stability


  time[0] = millis();
  if(time[1] != time[0]){     //避免1毫秒運行2次
    time[1] = time[0];
    
    if(time[0] % 1000 == 0){  //每1秒執行一次
      //運行程式碼;            //運行完後還可做其他事情
      Serial.println(1);
      //lcd.print("RIGHT ");
      lcd.setCursor(0,1);
      lcd.print(millis()/1000);
      //digitalWrite(PowerPin, HIGH);
    }
    //digitalWrite(PowerPin, LOW);
    if(time[0] % DelayTime == 0){  //每5秒執行一次
      //運行程式碼;
      Serial.println("55555555555555555555555");
        //if(!PowerState)
  {
    //delay(DelayTime);
    lcd.setCursor(9,1);
    lcd.print("5 min");
    digitalWrite(PowerPin, HIGH);
    delay(500);
    digitalWrite(PowerPin, LOW);
    Serial.println(PowerState);
  }
    }
  }  
}
