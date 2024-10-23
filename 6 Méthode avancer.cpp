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
Voiture() : marque("Inconnu"), modele("Inconnu"), annee(0), kilometrage(0.0), vitesse(0.0) {}
void avancer(float distance){
    kilometrage += distance;
    cout << "Le kilométrage actuel de la voiture " << kilometrage << " km" << endl ;
}
};

int main(){

Voiture v1;
v1.avancer(19.06);

return 0;
}
