#ifndef BOO_H
#define BOO_H
#include <string>
using namespace std;
  class Boo : public Flying{
    private:
      string color;
    public:
      Boo();
      Boo(string,int,int,int,int,int,int,int,string);
      string getColor();
      void setColor(string);
      virtual void especial(Minion*);
  };
  #include "Boo.cpp"
#endif
