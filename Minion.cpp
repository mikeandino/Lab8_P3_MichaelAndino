#include "Minion.h"

Minion::Minion(){

}

Minion::Minion(string pNombre, int pBatallas, int pXp, int pHp, int pDef, int pVel, int pFuerza){
    nombre = pNombre;
    batallas = pBatallas;
    xp = pXp;
    hp = pHp;
    def = pDef;
    vel = pVel;
    fuerza = pFuerza;
}

string Minion::getNombre(){
  return nombre;
}

void Minion::setNombre(string pNombre){
  nombre = pNombre;
}

int Minion::getBatalla(){
  return batallas;
}

void Minion::setBatalla(int pBatallas){
  batallas = pBatallas;
}

int Minion::getXp(){
  return xp;
}

void Minion::setXp(int pXp){
  xp = pXp;
}


int Minion::getHp(){
      return hp;
}

void Minion::setHp(int pHp){
  hp = pHp;
}

int Minion::getDef(){
    return def;
}

void Minion::setDef(int pDef){
  def = pDef;
}

int Minion::getVel(){
    return vel;
}

void Minion::setVel(int pVel){
  vel = pVel;
}

int Minion::getFuerza(){
    return fuerza;
}

void Minion::setFuerza(int pFuerza){
  fuerza = pFuerza;
}

void Minion::especial(Minion* ){

}

Minion::~Minion(){

}
