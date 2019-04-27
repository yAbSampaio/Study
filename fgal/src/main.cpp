#include <iostream>
#include <vector>
#include "fmath.h"


int main(){
    std::cout<<"Hello Word"<<std::endl;
    Ponto Pont;
    Pont.Novo(2,1);
    Ponto Pont1;
    Pont1.Novo(4,2);
    Vetor vec;
    vec.Input(Pont,Pont1);
    vec.Print();
    Ponto Pont2;
    Pont2.Novo(0,1);
    Ponto Pont3;
    Pont3.Novo(3,2);
    Vetor vec1;
    vec1.Input(Pont2,Pont3);
    vec1.Print();
    vec = vec+vec1;
    vec.Print();
    return 0;

}

/*   int x, y;

    std::cout<<"Hello Word"<<std::endl<<"Digite o o valor de x e y :";
    std::cin>> x >>y;
    Ponto Pont;
    Pont.Novo(x,y);
    std::cout<<"Digite o o valor de x e y :";
    std::cin>> x >>y;
    Ponto Pont1;*/