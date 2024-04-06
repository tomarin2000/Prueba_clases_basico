
#include "control.h"


S::S(int x, int y, int z): A1(x, y, z)
{
    cout << "soy el Constructor of the derived class S \n";
};
 
void S::fS(void) {
    cout << "soy la funcion fS de la class S" <<" \n";
};

