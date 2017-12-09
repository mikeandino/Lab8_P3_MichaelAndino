#include "ChainChomp.h"

ChainChomp::ChainChomp(){

}

ChainChomp::ChainChomp(string pNombre,int pBatallas,int pXp,int pHp,int pDef,int pVel,int pFuerza,int pIntimidar, string pColor):Melee(pNombre, pBatallas, pXp, pHp, pDef, pVel, pFuerza, pIntimidar){
    color = pColor;
}

string ChainChomp::getColor(){
  return color;
}

void ChainChomp::setColor(string pColor){
  color = pColor;
}

void ChainChomp::especial(Minion* enemigo) {

}
