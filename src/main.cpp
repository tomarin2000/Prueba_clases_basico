#define __MAIN__

#include "control.h"

// C++ program to implement
// constructor 
// inheritance

void setup() {
  Serial.begin(115200);

  S obj(1,2,3);
  
  obj.fS();
  //obj.fA1();

  funcion_recibe_objeto(&obj);

  Serial.printf("En MAIN varS vale --> %d", obj.varS);
}

void loop() {
  delay(5000);
}


void funcion_recibe_objeto(S* objeto_recibido) {
    objeto_recibido->varS = 1000;   // puede ser local o heredado (fA1 es funcion heredada de clase A1)
    Serial.printf("soy la funcion_recibe_objeto varS vale --> %d \n", objeto_recibido->varS);

}

  
