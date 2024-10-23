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
void afficherInfo() const {
    cout << "La marque de la voiture " << marque << endl ;
    cout << "Le modele de la voiture " << modele << endl ;
    cout << "La annee de fabrication de la voiture " << annee << endl ;
    cout << "Le kilométrage actuel de la voiture " << kilometrage << " km" << endl ;
    cout << "La vitesse actuelle de la voiture " << vitesse << " km/h" << endl ;
}

};

int main(){

Voiture v1("JEEP", "Renegade", 2020, 74000.0, 220.0);
v1.afficherInfo();
return 0;
}
