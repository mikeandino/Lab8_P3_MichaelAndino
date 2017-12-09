#ifndef HAMMERBRO_H
#define HAMMERBRO_H
#include <string>
using namespace std;
  class HammerBro : public Range{
    private:
      int size;
    public:
      HammerBro();
      HammerBro(string,int,int,int,int,int,int,int,int);
      int getSize();
      void setSize(int);
      virtual void especial(Minion*);
  };
  #include "HammerBro.cpp"
#endif
