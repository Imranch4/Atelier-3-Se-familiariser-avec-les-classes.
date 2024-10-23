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
void accelerer(float valeur){
    vitesse += valeur;
    cout << "La vitesse actuelle de la voiture " << vitesse << " km/h" << endl ;
}
void freiner(float valeur){
    if(vitesse - valeur < 0){
        vitesse = 0;
      } else{
          vitesse -= valeur;
    }
cout << "La vitesse actuelle de la voiture " << vitesse << " km/h" << endl ;
}
};

int main(){

Voiture v1;
v1.accelerer(18.06);
v1.freiner(1.3);
return 0;
}
