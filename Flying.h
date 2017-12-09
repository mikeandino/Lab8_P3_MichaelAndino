#ifndef FLYING_H
#define FLYING_H
#include <string>
using namespace std;
  class Flying : public Minion{
    private:
      int vuelo;
    public:
      Flying();
      Flying(string,int,int,int,int,int,int,int);
      int getVuelo();
      void setVuelo(int);
      virtual void especial(Minion*);
  };
  #include "Flying.cpp"
#endif
