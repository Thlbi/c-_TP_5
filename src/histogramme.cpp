#include "histogramme.hpp"
#include <algorithm>
    
    
Histo::Histo(double a,double b,int c):borneInf(a),borneSup(b),nb_classes(c){
    for(int i=0;i<c;i++){
        v.push_back(Classe(((b-a)/c)*i+a,((b-a)/c)*(i+1)+a));
    }
}

Histo::~Histo(){}

std::vector<Classe> Histo::getClasses() const{
    return v;
}

void Histo::ajouter(Echantillon ech) {
    for(auto const& e: ech) {
        auto containsE = [e](Classe const& c) {
            return c.getBorneInf() <= e.getNombre() && e < c.getBorneSup();
        };
        auto it = std::find_if(begin(v), end(v), containsE);
        if(it != end(v))
            (*it).ajouter();
    }
}

/*
void Histo::ajouter(Echantillon e){
    std::vector<Valeur>::iterator it=e.begin();
    for(Classe c : v){
        while(it!=e.end()){
            it=std::find_if(it,e.end(),[&c](Valeur e){
                if((c.getBorneInf()<e.getNombre())&&(e.getNombre()<c.getBorneSup())){
                    return true;
                }
                else{
                    return false;
                }
            });
            if( (it!=e.begin()) && (it!=e.end()) ){
                c.ajouter();
                it+=1;
            }
        
            
        }
        it=e.begin();
    }

}
*/