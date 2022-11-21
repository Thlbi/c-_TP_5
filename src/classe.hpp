#ifndef _TP5_CLASS_
#define _TP5_CLASS_
class Classe{
    double inf;
    double sup;
    int quantite;
    public:
        Classe(double,double a);
        ~Classe();
        double getBorneInf() const;
        double getBorneSup() const ;
        int getQuantite()const ;
        void setBorneInf(double a);
        void setBorneSup(double a);
        void setQuantite(int n);
        void ajouter();


};




#endif