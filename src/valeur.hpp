#ifndef _TP5_VALEUR_
#define _TP5_VALEUR_

#include <iostream>
class Valeur{

    double _nombre;

    public:
    Valeur();
    Valeur(double a);
    ~Valeur();
    double getNombre() const;
    void setNombre(double a);
    bool operator<(Valeur const &) const;
};


#endif