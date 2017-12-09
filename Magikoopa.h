#ifndef MAGIKOOPA_H
#define MAGIKOOPA_H
#include <string>
using namespace std;
  class Magikoopa : public Range{
    private:
      string color;
    public:
      Magikoopa();
      Magikoopa(string,int,int,int,int,int,int,int,string);
      string getColor();
      void setColor(string);
      virtual void especial(Minion*);
  };
  #include "Magikoopa.cpp"
#endif
