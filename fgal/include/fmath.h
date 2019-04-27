#include <vector>

class Ponto
{
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

class Vetor
{
private:
    Ponto point_beg;
    int py;
    int px;

public:
    void Input(Ponto P1,Ponto P2);
    void Print();
    Vetor(){}
    ~Vetor(){}
};
