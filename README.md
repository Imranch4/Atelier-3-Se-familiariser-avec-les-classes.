# Atelier-3-Se-familiariser-avec-les-classes.
Vous devez concevoir une classe appelée Voiture qui représente les caractéristiques d'une voiture et ses comportements associés.
La classe doit inclure les éléments suivants :
Attributs :
marque (de type std::string) : la marque de la voiture.
modele (de type std::string) : le modèle de la voiture.
annee (de type int) : l'année de fabrication de la voiture.
kilometrage (de type float) : le kilométrage actuel de la voiture.
vitesse (de type float) : la vitesse actuelle de la voiture.
   
Méthodes :
1. Constructeur par défaut : Initialise tous les attributs avec des valeurs par défaut.
2. Constructeur avec paramètres : Permet d'initialiser la voiture avec une marque, un modèle,
une année, un kilométrage et une vitesse initiale.
3. Méthode accelerer(float valeur) : Incrémente la vitesse actuelle de la voiture en fonction de la
valeur passée en paramètre.
4. Méthode freiner(float valeur) : Diminue la vitesse actuelle de la voiture en fonction de la
valeur passée en paramètre, sans que la vitesse ne devienne négative.
5. Méthode afficherInfo() : Affiche les informations sur la voiture (marque, modèle, année,
kilométrage, vitesse).
6. Méthode avancer(float distance) : Incrémente le kilométrage en fonction de la distance passée
en paramètre.
7. Destructeur : Affiche un message indiquant que la voiture est détruite.
