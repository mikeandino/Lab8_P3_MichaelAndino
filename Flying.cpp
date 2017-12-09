#include "Flying.h"

Flying::Flying(){

}

Flying::Flying(string pNombre,int pBatallas,int pXp,int pHp,int pDef,int pVel,int pFuerza,int pVuelo):Minion(pNombre, pBatallas, pXp, pHp, pDef, pVel, pFuerza){
    vuelo = pVuelo;
}

int Flying::getVuelo(){
  return vuelo;
}

void Flying::setVuelo(int pVuelo){
  vuelo = pVuelo;
}

void Flying::especial(Minion*){

}
