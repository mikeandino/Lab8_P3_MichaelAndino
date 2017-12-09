#ifndef RANGE_H
#define RANGE_H
#include <string>
using namespace std;
  class Range : public Minion{
    private:
      int rango;
    public:
      Range();
      Range(string,int,int,int,int,int,int,int);
      int getRango();
      void setRango(int);
      virtual void especial(Minion*);
  };
  #include "Range.cpp"
#endif
