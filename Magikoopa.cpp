#include "Magikoopa.h"

Magikoopa::Magikoopa(){

}

Magikoopa::Magikoopa(string pNombre,int pBatallas,int pXp,int pHp,int pDef,int pVel,int pFuerza,int pRango, string pColor):Range(pNombre, pBatallas, pXp, pHp, pDef, pVel, pFuerza, pRango){
    color = pColor;
}

string Magikoopa::getColor(){
  return color;
}

void Magikoopa::setColor(string pColor){
  color = pColor;
}

void Magikoopa::especial(Minion* enemigo) {

}
