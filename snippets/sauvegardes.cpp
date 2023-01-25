#include "joueur.hpp"
#include <fstream>


/**
* @brief Cette fonction sauvegarde les informations du joueur dans un fichier texte
* 
* Ouverture du fichier "joueurs.txt" en mode écriture,
* puis utilisation de la fonction GetInformations() pour récupérer les informations du joueur, et les écrire dans le fichier, une valeur par ligne.
* A la fin elle ferme le fichier.
* @param Player : Joueur à sauvegarder
*/
void Sauvegarder(FJoueur Player)
{
    std::ofstream outFile("joueurs.txt");
    FJoueurInfo informations = Player.GetInformations();
    outFile << informations.Pseudo << std::endl;
    outFile << informations.NbPieces << std::endl;
    outFile << informations.Score << std::endl;
    outFile.close();
}

/**
* @brief Cette fonction charge les informations d'un joueur depuis un fichier texte
* 
* Ouverture de "joueurs.txt" en mode lecture, puis lecture des informations dans le fichier.
* Les informations sont utilisées pour créer un objet FJoueur.
* Et ferme le fichier à la fin.
* @return Un objet FJoueur avec les informations chargées depuis le fichier.
*/
FJoueur Charger()
{
    std::string pseudo;
    int32 nbPieces;
    int32 score;

    std::ifstream inFile("joueurs.txt");
    inFile >> pseudo;
    inFile >> nbPieces;
    inFile >> score;
    inFile.close();

    FJoueur Player(pseudo, nbPieces, score);
    return Player;
}
