#include "joueur.hpp"
#include <fstream>


/**
* @brief Cette fonction sauvegarde les informations du joueur dans un fichier texte
* 
* La fonction utilise les flux de fichiers de la bibliothèque standard C++ pour ouvrir un fichier "joueur.txt" en mode écriture,
* puis utilise la fonction GetInformations() pour récupérer les informations du joueur, et les écrire dans le fichier, une valeur par ligne.
* A la fin elle ferme le fichier.
* @param Player : Joueur à sauvegarder
*/
void Sauvegarder(FJoueur Player)
{
    std::ofstream outFile("joueur.txt");
    FJoueurInfo informations = Player.GetInformations();
    outFile << informations.Pseudo << std::endl;
    outFile << informations.NbPieces << std::endl;
    outFile << informations.Score << std::endl;
    outFile.close();
}
