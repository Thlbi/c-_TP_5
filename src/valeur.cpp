#include "valeur.hpp"

Valeur::Valeur(): _nombre(0){

}


Valeur::Valeur(double a): _nombre(a){}


Valeur::~Valeur(){}

double Valeur::getNombre() const {
    return _nombre;
}


void Valeur::setNombre(double a) {
    _nombre=a;
}


bool Valeur::operator<(Valeur const &v)const {
    return this->getNombre()<v.getNombre();
}


