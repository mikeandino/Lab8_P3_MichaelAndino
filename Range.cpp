#include "Range.h"

Range::Range(){

}

Range::Range(string pNombre,int pBatallas,int pXp,int pHp,int pDef,int pVel,int pFuerza,int pRango):Minion(pNombre, pBatallas, pXp, pHp, pDef, pVel, pFuerza){
    rango = pRango;
}

int Range::getRango(){
  return rango;
}

void Range::setRango(int pRango){
  rango = pRango;
}

void Range::especial(Minion*){

}
