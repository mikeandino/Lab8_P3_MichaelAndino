#ifndef EQUIPO_H
#define EQUIPO_H
#include "Minion.h"
#include <string>
#include <vector>
using namespace std;
  class Equipo{
    private:
      vector<Minion* > equipo;
      Minion* capitan;
      string nombre;
    public:
      Equipo(string);
      vector<Minion* > getEquipo();
      void setEquipo(vector<Minion* >);
      void addMinion(Minion* );
      void changeMinion(Minion* );
      Minion* getCapitan();
      void setCapitan();
      string getNombre();
      void setNombre(string);
  };
  #include "Equipo.cpp"
#endif
