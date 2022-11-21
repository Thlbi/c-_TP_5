#include "histogramme.hpp"
    
    
    
    Histo::Histo(double a,double b,int c):borneInf(a),borneSup(b),nb_classes(c){
        for(int i=0;i<c;i++){
            v.push_back(Classe(((b-a)/c)*i+a,((b-a)/c)*(i+1)+a));
        }
    }

    Histo::~Histo(){}

    std::vector<Classe> Histo::getClasses() const{
        return v;
    }

    void Histo::ajouter(Echantillon e){
        auto it=e._v.begin();
}