#ifndef _TP5_ECHANTILLON_
#define _TP5_ECHANTILLON_

#include <vector>
#include "valeur.hpp"
#include <algorithm>
#include <stdexcept>
class Echantillon{

    std::vector<Valeur> _v;

    public:
        using iterator = typename std::vector<Valeur>::iterator;

        Echantillon();
        int getTaille();
        void ajouter(double a);
        Valeur getMinimum() const ;
        Valeur getMaximum() const ;
        Valeur getValeur(int i) const;
        iterator begin();
        iterator end();
};



#endif