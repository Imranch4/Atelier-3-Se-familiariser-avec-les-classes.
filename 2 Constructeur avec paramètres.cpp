#include<iostream>
#include<string>

using namespace std;

class Voiture{
    private:
string marque;
string modele;
int annee;
float kilometrage;
float vitesse;
    public:
Voiture(string mar, string mod, int a, float km, float v) : marque(mar), modele(mod), annee(a), kilometrage(km), vitesse(v) {}
};

