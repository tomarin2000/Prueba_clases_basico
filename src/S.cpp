
#include "control.h"


S::S(int x, int y, int z): A1(x, y, z)
{
    varS=100;
    Serial.printf("soy el Constructor of the derived class S varS vale --> %d \n", varS);
};
 
void S::fS(void) {
    varS = 10;
    Serial.printf("soy la funcion fS de la class S varS vale --> %d \n", varS);
};
