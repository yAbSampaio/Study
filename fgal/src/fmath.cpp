#include "fmath.h"
#include <vector>
#include <iostream>
#include "math.h"

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

Vetor Vetor::operator+(Vetor A){
    Vetor B;
    Ponto C;
    int a ,b;
    a = px + A.px;
    b = py + A.py;
    std::vector<int> Po;
    Po = point_beg.Output();
    C.Novo(a+Po[0],b+Po[1]);    
    B.Input(point_beg,C);
    return B;
}

void Vetor::Input(Ponto P1, Ponto P2){
    Ponto P3;
    point_beg = P1;
    P3 = P2-P1;
    std::vector<int> Pont1;
    Pont1 = P3.Output();
    px = Pont1[0];
    py = Pont1[1];
    modulo = Module(px,py);
}

void Vetor::Print(){
    std::cout << "Inicio\n";
    point_beg.Print();
    std::cout << "Vetor: ("<<px<<", "<<py<<")\n";
    std::cout << "Valor: "<<modulo<<"\n";
}

void Vetor::operator*(int A){
    px = px*A;
    py = py*A;
    modulo = Module(px,py);    
}

float Module(int X, int Y){
    return sqrt(pow(X,2) + pow(Y,2));
}