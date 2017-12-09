#include "Boo.h"

Boo::Boo(){

}

Boo::Boo(string pNombre,int pBatallas,int pXp,int pHp,int pDef,int pVel,int pFuerza,int pVuelo, string pColor):Flying(pNombre, pBatallas, pXp, pHp, pDef, pVel, pFuerza, pVuelo){
    color = pColor;
}

string Boo::getColor(){
  return color;
}

void Boo::setColor(string pColor){
  color = pColor;
}

void Boo::especial(Minion* enemigo) {
  int temp = vel;
  vel = 90;
  for (int i = 0; i < 3; i++) {

  }
  vel = temp;
}
