#ifndef MINION_H
#define MINION_H
#include <string>
using namespace std;
  class Minion{
    protected:
      string nombre;
      int batallas;
      int xp;
      int hp;
      int def;
      int vel;
      int fuerza;
    public:
      Minion();
      Minion(string,int,int,int,int,int,int);
      string getNombre();
      void setNombre(string);
      int getBatalla();
      void setBatalla(int);
      int getXp();
      void setXp(int);
      int getHp();
      void setHp(int);
      int getDef();
      void setDef(int);
      int getVel();
      void setVel(int);
      int getFuerza();
      void setFuerza(int);
      virtual void especial(Minion* );
      virtual ~Minion();
  };
  #include "Minion.cpp"
#endif
