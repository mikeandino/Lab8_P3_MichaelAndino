#ifndef MELEE_H
#define MELEE_H
#include <string>
using namespace std;
  class Melee : public Minion{
    protected:
      int intimidar;
    public:
      Melee();
      Melee(string,int,int,int,int,int,int,int);
      int getIntimidar();
      void setIntimidar(int);
      virtual void especial(Minion*);
  };
  #include "Melee.cpp"
#endif
