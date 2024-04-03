
#include "control.h"


S::S(int x, int y, int z): A1(x, y, z)
{
    cout << "soy el Constructor of the derived class S \n";
};
 

 /*  
class S: public A1
{
  public:
  S(int x, int y, int z): A1(x, y, z)
  {
    cout << "soy el Constructor of the derived class S \n";
  }
};
 */ 

