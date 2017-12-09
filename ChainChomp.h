#ifndef CHAINCHOMP_H
#define CHAINCHOMP_H
#include <string>
using namespace std;
  class ChainChomp : public Melee{
    private:
      string color;
    public:
      ChainChomp();
      ChainChomp(string,int,int,int,int,int,int,int,string);
      string getColor();
      void setColor(string);
      virtual void especial(Minion*);
  };
  #include "ChainChomp.cpp"
#endif
