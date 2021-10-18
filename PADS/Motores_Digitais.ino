//================== Wesley Seven: Motores Greifen ======================== 

#include <PS2X_lib.h>  

PS2X CPS; 

int error = 0; 
byte type = 0;
byte vibrate = 0;

int MT1 = 40;
int MT2 = 42;
int MT3 = 41;
int MT4 = 43;
int ENA = 44;
int ENB = 45;


void setup(){
  
  Serial.begin(57600);

  pinMode (MT1, OUTPUT);
  pinMode (MT2, OUTPUT);
  pinMode (MT3, OUTPUT);
  pinMode (MT4, OUTPUT);

  analogWrite(ENA, 110);
  analogWrite(ENB, 110);

  
 error = CPS.config_gamepad(24,23,25,22, true, true);   //COnfigurações nos Pinos:  GamePad(clock, command, attention, data, Pressures?, Rumble?)
  
}

void loop(){

      if(error == 1) //Pular loop se o controle não for encontrado
      return; 

      CPS.read_gamepad(false, vibrate); 

      if(CPS.Button(PSB_PAD_UP)) { Frente(); }
      
      else { Parar(); } 
            
      if(CPS.Button(PSB_PAD_RIGHT)) { Direita(); }
    
      if(CPS.Button(PSB_PAD_LEFT)) { Esquerda(); }
                
      if(CPS.Button(PSB_PAD_DOWN)) { Re(); }

                     
 delay(50);
     
}

void Frente (){
  digitalWrite(MT1, HIGH);
  digitalWrite(MT2, LOW);
  digitalWrite(MT3, HIGH);
  digitalWrite(MT4, LOW);
}

void Re (){
  digitalWrite(MT1, LOW);
  digitalWrite(MT2, HIGH);
  digitalWrite(MT3, LOW);
  digitalWrite(MT4, HIGH);
}

void Direita () {
  digitalWrite(MT1, HIGH);
  digitalWrite(MT2, LOW);
  digitalWrite(MT3, LOW);
  digitalWrite(MT4, HIGH);
}

void Esquerda () {
  digitalWrite(MT1, LOW);
  digitalWrite(MT2, HIGH);
  digitalWrite(MT3, HIGH);
  digitalWrite(MT4, LOW);
}

void Parar () {
  digitalWrite(MT1, LOW);
  digitalWrite(MT2, LOW);
  digitalWrite(MT3, LOW);
  digitalWrite(MT4, LOW);
}
