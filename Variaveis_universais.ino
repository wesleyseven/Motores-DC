void Frente (){

  VEL = map(CPS.Analog(PSS_LY), 129, 255, 0, 255);
  
  digitalWrite(MT1, HIGH);
  digitalWrite(MT2, LOW);
  digitalWrite(MT3, HIGH);
  digitalWrite(MT4, LOW);

  analogWrite(ENA, VEL);
  analogWrite(ENB, VEL);

}

void Re (){

  VEL = map(CPS.Analog(PSS_LY), 0, 127, 255, 0);

  digitalWrite(MT1, LOW);
  digitalWrite(MT2, HIGH);
  digitalWrite(MT3, LOW);
  digitalWrite(MT4, HIGH);

  analogWrite(ENA, VEL);
  analogWrite(ENB, VEL);
  
}

void Direita () {

  VEL = map(CPS.Analog(PSS_LX), 129, 255, 0, 255);
  
  digitalWrite(MT1, HIGH);
  digitalWrite(MT2, LOW);
  digitalWrite(MT3, LOW);
  digitalWrite(MT4, HIGH);

  analogWrite(ENA, VEL);
  analogWrite(ENB, VEL);
}

void Esquerda () {

  VEL = map(CPS.Analog(PSS_LX), 0, 127, 255, 0);
  
  digitalWrite(MT1, LOW);
  digitalWrite(MT2, HIGH);
  digitalWrite(MT3, HIGH);
  digitalWrite(MT4, LOW);

  analogWrite(ENA, VEL);
  analogWrite(ENB, VEL);

}

void Parar () {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}
