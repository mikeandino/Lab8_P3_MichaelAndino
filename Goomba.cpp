#include "Goomba.h"

Goomba::Goomba(){

}

Goomba::Goomba(string pNombre,int pBatallas,int pXp,int pHp,int pDef,int pVel,int pFuerza,int pIntimidar, int pSize):Melee(pNombre, pBatallas, pXp, pHp, pDef, pVel, pFuerza, pIntimidar){
    size = pSize;
}

int Goomba::getSize(){
  return size;
}

void Goomba::setSize(int pSize){
  size = pSize;
}

void Goomba::especial(Minion* enemigo) {

}
