#include "classe.hpp"

Classe::Classe(double a, double b):inf(a),sup(b),quantite(0){ 

}
Classe::~Classe(){}

double Classe::getBorneInf() const{
    return inf;
}

double Classe::getBorneSup() const{
    return sup;
}

int Classe::getQuantite() const{
    return quantite;
}

void Classe::setBorneInf(double a){
    inf = a;
}
void Classe::setBorneSup(double a){
    sup= a;
}

void Classe::setQuantite(int n){
    quantite=n;
}

void Classe::ajouter(){
    quantite+=1;
}