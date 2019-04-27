#include <iostream>
#include <vector>
#include "fmath.h"


int main(){
    int x, y;

    std::cout<<"Hello Word"<<std::endl<<"Digite o o valor de x e y :";
    std::cin>> x >>y;
    Ponto Pont;
    Pont.Novo(x,y);
    std::cout<<"Digite o o valor de x e y :";
    std::cin>> x >>y;
    Ponto Pont1;
    Pont1.Novo(x,y);
    Vetor vec;
    vec.Input(Pont,Pont1);
    vec.Print();
    return 0;

}