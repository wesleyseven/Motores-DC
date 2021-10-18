//Video Youtube: https://www.youtube.com/watch?v=HhR85wKUKFo 
// Canal Wesley Seven
//================== Wesley Seven: Motores Greifen ======================== // 


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
int VEL; 


void setup(){
 
  pinMode (MT1, OUTPUT);
  pinMode (MT2, OUTPUT);
  pinMode (MT3, OUTPUT);
  pinMode (MT4, OUTPUT);


  
 error = CPS.config_gamepad(24,23,25,22, true, true);   //COnfigurações nos Pinos:  GamePad(clock, command, attention, data, Pressures?, Rumble?)
  
}

void loop(){

      if(error == 1) //Pular loop se o controle não for encontrado
      return; 

      CPS.read_gamepad(false, vibrate); 

      
      if(CPS.Analog(PSS_LY) < 120) { Frente (); } 

      else { Parar ();}

      if(CPS.Analog(PSS_LY) > 128) { Re (); }

      if(CPS.Analog(PSS_LX) > 128) { Direita(); }

      if(CPS.Analog(PSS_LX) < 128) { Esquerda(); }

      delay(50);
     
}
