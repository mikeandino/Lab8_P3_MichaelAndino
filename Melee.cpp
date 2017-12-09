#include "Melee.h"

Melee::Melee(){

}

Melee::Melee(string pNombre,int pBatallas,int pXp,int pHp,int pDef,int pVel,int pFuerza,int pIntimidar):Minion(pNombre, pBatallas, pXp, pHp, pDef, pVel, pFuerza){
    intimidar = pIntimidar;
}

int Melee::getIntimidar(){
  return intimidar;
}

void Melee::setIntimidar(int pIntimidar){
  intimidar = pIntimidar;
}

void Melee::especial(Minion*){

}
