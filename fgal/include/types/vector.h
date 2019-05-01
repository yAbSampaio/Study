#ifndef VECTOR_H
#define VECTOR_H

#include "point.h"

namespace fgal{

    class Vetor {
        private:
            Ponto point_beg;
            int py;
            int px;
            float modulo;

        public:
            Vetor(){}
            ~Vetor(){}
            void Input(Ponto P1,Ponto P2);
            void Print();
            void operator *(int A);
            Vetor operator +(Vetor A);
            float Module();
    };

}

#endif