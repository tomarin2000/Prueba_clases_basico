#define __MAIN__

#include "control.h"

// C++ program to implement
// constructor 
// inheritance

void setup() {
  Serial.begin(115200);

  obj = new S(1,2,3);
}

void loop() {

  obj->fS();
  obj->fA1();

  delay(5000);
}
  
