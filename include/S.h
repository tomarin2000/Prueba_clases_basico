
#ifndef S_h
  #define S_h

    #include "A1.h"

    class S: public A1 {
    public:
        S(int x, int y, int z);  // declaracion del constructor de clase S
        void fS(void);
        int varS;
    };


#endif