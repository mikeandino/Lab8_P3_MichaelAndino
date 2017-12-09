#ifndef PARATROOPA_H
#define PARATROOPA_H
#include <string>
using namespace std;
  class Paratroopa : public Flying{
    private:
      string color;
    public:
      Paratroopa();
      Paratroopa(string,int,int,int,int,int,int,int,string);
      string getColor();
      void setColor(string);
      virtual void especial(Minion*);
  };
  #include "Paratroopa.cpp"
#endif
