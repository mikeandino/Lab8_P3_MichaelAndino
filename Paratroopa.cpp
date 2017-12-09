#include "Paratroopa.h"

Paratroopa::Paratroopa(){

}

Paratroopa::Paratroopa(string pNombre,int pBatallas,int pXp,int pHp,int pDef,int pVel,int pFuerza,int pVuelo, string pColor):Flying(pNombre, pBatallas, pXp, pHp, pDef, pVel, pFuerza, pVuelo){
    color = pColor;
}

string Paratroopa::getColor(){
  return color;
}

void Paratroopa::setColor(string pColor){
  color = pColor;
}

void Paratroopa::especial(Minion* enemigo) {

}
