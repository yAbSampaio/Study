#include "fmath.h"
#include <vector>
#include <iostream>

void Ponto::Novo(int x, int y){
    px = x;
    py = y;
}

std::vector<int> Ponto::Output(){
    std::vector<int> Vect;
    Vect.push_back(px);
    Vect.push_back(py);
    return Vect;
}

void Ponto::Print(){
    std::cout << "Ponto : ("<<px<<" , "<<py<<")\n";
}

Ponto Ponto::operator-(Ponto A){
    int a, b;
    Ponto B;
    a = px - A.px;
    b = py - A.py;
    B.Novo(a,b);
    return B;
}

void Vetor::Input(Ponto P1, Ponto P2){
    Ponto point, P3;
    point_beg = P1;
    point = P2;
    P3 = P2-P1;
    std::vector<int> Pont1;
    Pont1 = P3.Output();
    px = Pont1[0];
    py = Pont1[1];
}

void Vetor::Print(){
    std::cout << "Vetor  :\nPonto inicial\n";
    point_beg.Print();
    std::cout << "Vetor: ("<<px<<", "<<py<<")\n";
}
