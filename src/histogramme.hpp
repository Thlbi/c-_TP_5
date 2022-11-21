#ifndef _TP5_HISTOGRAMME_
#define _TP5_HISTOGRAMME_

#include "valeur.hpp"
#include "echantillon.hpp"
#include "classe.hpp"


class Histo{
    std::vector<Classe> v;
    double borneInf;
    double borneSup;
    int nb_classes;

    public:
        Histo(double,double,int);
        ~Histo();
        std::vector<Classe> getClasses() const;
        void ajouter(Echantillon e);


};



#endif