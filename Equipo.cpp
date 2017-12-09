#include "Equipo.h"

Equipo::Equipo(string pNombre){
  nombre = pNombre;
}

vector<Minion* > Equipo::getEquipo(){
  return equipo;
}

void Equipo::setEquipo(vector<Minion* > pEquipo){
  if (pEquipo.size()>=7) {
    equipo = pEquipo;
  }else{
    cout << "El equipo que mando excede el limite de secuaces." << '\n';
  }
}

void Equipo::addMinion(Minion* minion){
  if (equipo.size()<7) {
    equipo.push_back(minion);
    if (equipo.size() == 1) {
      setCapitan();
    }
  }else{
    cout << "El equipo no tiene cupo disponible." << '\n';
  }
}

void changeMinion(Minion* minion,int index){

}

Minion* Equipo::getCapitan(){
  if (equipo.size() != 0) {
    return equipo[0];
  }else {
    return NULL;
  }
}

void Equipo::setCapitan(){
  capitan = equipo[0];
}

string Equipo::getNombre(){
  return nombre;
}

void Equipo::setNombre(string pNombre){

}
