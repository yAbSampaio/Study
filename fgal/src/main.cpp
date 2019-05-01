#include <iostream>
#include <vector>
#include "operations/operations.h"
#include "types/vector.h"
#include "types/point.h"


int main(){
    std::cout<<"Hello Word"<<std::endl;
    fgal::Ponto Pont;
    Pont.Novo(2,1);
    fgal::Ponto Pont1;
    Pont1.Novo(4,2);
    fgal::Vetor vec;
    vec.Input(Pont,Pont1);
    vec.Print();
    fgal::Ponto Pont2;
    Pont2.Novo(0,1);
    fgal::Ponto Pont3;
    Pont3.Novo(3,2);
    fgal::Vetor vec1;
    vec1.Input(Pont2,Pont3);
    vec1.Print();
    vec = vec+vec1;
    vec.Print();
    return 0;

}