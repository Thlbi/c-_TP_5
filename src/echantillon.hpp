#ifndef _TP5_ECHANTILLON_
#define _TP5_ECHANTILLON_

#include <vector>
#include "valeur.hpp"
#include <algorithm>

class Echantillon{

    std::vector<Valeur> _v;
    public:
        Echantillon();
        int getTaille();
        void ajouter(double a);
        Valeur getMinimum() const ;
        Valeur getMaximum() const ;
};


#endif