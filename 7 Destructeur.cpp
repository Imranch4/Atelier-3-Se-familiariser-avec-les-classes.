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
 ~Voiture() {
        cout << "La voiture " << marque << " " << modele << " est detruite";
    }
};

int main(){
 Voiture v1("JEEP", "Renegade", 2020, 74000.0, 220.0);
return 0;
}
