#include "HammerBro.h"

HammerBro::HammerBro(){

}

HammerBro::HammerBro(string pNombre,int pBatallas,int pXp,int pHp,int pDef,int pVel,int pFuerza,int pRango, int pSize):Range(pNombre, pBatallas, pXp, pHp, pDef, pVel, pFuerza, pRango){
    size = pSize;
}

int HammerBro::getSize(){
  return size;
}

void HammerBro::setSize(int pSize){
  size = pSize;
}

void HammerBro::especial(Minion* enemigo) {

}
