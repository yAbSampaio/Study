#include "math.h"
#include "operations/operations.h"
#include "types/vector.h"
#include "types/point.h"
#include <iostream>
#include <vector>


    void fgal::Ponto::Novo(int x, int y){
        px = x;
        py = y;
    }

    std::vector<int> fgal::Ponto::Output(){
        std::vector<int> Vect;
        Vect.push_back(px);
        Vect.push_back(py);
        return Vect;
    }

    void fgal::Ponto::Print(){
        std::cout << "Ponto : ("<<px<<" , "<<py<<")\n";
    }

    fgal::Ponto fgal::Ponto::operator-(fgal::Ponto A){
        int a, b;
        fgal::Ponto B;
        a = px - A.px;
        b = py - A.py;
        B.Novo(a,b);
        return B;
    }

    fgal::Vetor fgal::Vetor::operator+(fgal::Vetor A){
        fgal::Vetor B;
        fgal::Ponto C;
        int a ,b;
        a = px + A.px;
        b = py + A.py;
        std::vector<int> Po;
        Po = point_beg.Output();
        C.Novo(a+Po[0],b+Po[1]);    
        B.Input(point_beg,C);
        return B;
    }

    void fgal::Vetor::Input(fgal::Ponto P1, fgal::Ponto P2){
        fgal::Ponto P3;
        point_beg = P1;
        P3 = P2-P1;
        std::vector<int> Pont1;
        Pont1 = P3.Output();
        px = Pont1[0];
        py = Pont1[1];
        modulo = Module();
    }

    void fgal::Vetor::Print(){
        std::cout << "Inicio\n";
        point_beg.Print();
        std::cout << "Vetor: ("<<px<<", "<<py<<")\n";
        std::cout << "Valor: "<<modulo<<"\n";
    }

    void fgal::Vetor::operator*(int A){
        px = px*A;
        py = py*A;
        modulo = Module();    
    }

    float fgal::Vetor::Module(){
        return sqrt(pow(px,2) + pow(py,2));
    }

    float f::Module(int x,int y){
        return x+y;
    }