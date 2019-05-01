#ifndef POINT_H
#define POINT_H

#include <vector>

namespace fgal{
    class Ponto {
        private:
            int px;
            int py;
        public:
            Ponto(){}
            ~Ponto(){}
            void Novo(int x, int y);
            std::vector<int> Output();
            void Print();
            Ponto operator -(Ponto A);

    };

}

#endif