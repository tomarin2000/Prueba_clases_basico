#include <Arduino.h>

// C++ program to implement
// constructor 
// inheritance
#include<iostream>
using namespace std;
class A1
{
  public:
  A1(int x, int y, int z)
  {
    cout << "soy el Constructor of the base class A1 numeros pasados: " << x <<" "<< y <<" " << z <<" \n";
  }
 
};
 
 
class S: public A1
{
  public:
  S(int x, int y, int z): A1(x, y, z)
  {
    cout << "soy el Constructor of the derived class S \n";
  }
};
 
void setup() {
  Serial.begin(115200);

  S obj(1,2,3);
}

void loop() {}
  
