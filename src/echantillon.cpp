#include "echantillon.hpp"

Echantillon::Echantillon(){}

int Echantillon::getTaille()  {
    return _v.size(); 
}

void Echantillon::ajouter(double a){
    _v.push_back(a);
}



Valeur Echantillon::getMinimum() const {
   if(_v.size()!=0){
        return *std::min_element(_v.begin(),_v.end());
   }
    else{
        throw std::domain_error("Vecteur vide");
    }
} 

Valeur Echantillon::getMaximum() const {
    if(_v.size()!=0){
        return *std::max_element(_v.begin(),_v.end());
    }
    else{
        throw std::domain_error("Vecteur vide");
    }
}

Valeur Echantillon::getValeur(int i) const{
    if (_v.size()>=i+1.0){
    return _v[i];
    }
    else{
        throw std::out_of_range("Out of range");
    }
}

