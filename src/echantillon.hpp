#ifndef _TP5_ECHANTILLON_
#define _TP5_ECHANTILLON_

#include <vector>
#include "valeur.hpp"
#include <algorithm>
#include <stdexcept>
class Echantillon{

    std::vector<Valeur> _v;
    public:
        Echantillon();
        int getTaille();
        void ajouter(double a);
        Valeur getMinimum() const ;
        Valeur getMaximum() const ;
        Valeur getValeur(int i) const;
};

	using const_iterator = typename std::vector<Valeur>::const_iterator;
 /* def begin et end (voir si il faut utiliser cont ou it classique*/

#endif