
#ifndef S_h
  #define S_h

    #include "A1.h"

    class S: public A1 {
    public:
        S(int x, int y, int z);  // declaracion del constructor de clase S
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


#endif