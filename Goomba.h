#ifndef GOOMBA_H
#define GOOMBA_H
#include <string>
using namespace std;
  class Goomba : public Melee{
    private:
      int size;
    public:
      Goomba();
      Goomba(string,int,int,int,int,int,int,int,int);
      int getSize();
      void setSize(int);
      virtual void especial(Minion*);
  };
  #include "Goomba.cpp"
#endif
