#include "echantillon.hpp"

Echantillon::Echantillon(){}

int Echantillon::getTaille()  {
    return _v.size(); 
}

void Echantillon::ajouter(double a){
    _v.push_back(a);
}



Valeur Echantillon::getMinimum() const {
    return *std::min_element(_v.begin(),_v.end());
}

Valeur Echantillon::getMaximum() const {
    return *std::max_element(_v.begin(),_v.end());
}