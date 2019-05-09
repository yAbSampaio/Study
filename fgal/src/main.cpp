#include <iostream>
#include <vector>
#include "operations/operations.h"
#include "types/vector.h"
#include "types/point.h"


int main(){
    std::cout<<"Hello Word"<<std::endl;
    fgal::Ponto Ponto,Ponto1,Ponto2,Ponto3;
    Ponto.Novo(4,2);
    Ponto1.Novo(4,2);
    fgal::Vetor vec,vec1;
    vec.Input(Ponto,Ponto1);
    vec.Print();
    Ponto2.Novo(0,1);
    Ponto3.Novo(0,2);
    vec1.Input(Ponto2,Ponto3);
    vec1.Print();
    vec = vec+vec1;
    vec.Print();
    std::cout<<std::endl<<f::Module(2,4)<<std::endl;
    return 0;

}