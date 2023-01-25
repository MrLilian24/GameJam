#include "joueur.hpp"
#include <iostream>

/**
 * @brief Constructeur par défaut de FJoueur
 *
 * Initialise les propriétés de la classe Joueur avec des valeurs par défaut ("", 0, 0).
 */
FJoueur::FJoueur()
    : Pseudo(""), NbPieces(0), Score(0)
{}

/**
 * @brief Constructeur avec valeurs initiales de FJoueur
 *
 * Permet de spécifier les propriétés lors de la création d'un objet Joueur.
 * 
 * @param InPseudo Le pseudo du joueur
 * @param InNbPieces Le nombre de pièces du joueur
 * @param InScore Le score du joueur
 */
FJoueur::FJoueur(FString InPseudo, int32 InNbPieces, int32 InScore)
    : Pseudo(InPseudo), NbPieces(InNbPieces), Score(InScore)
{}

/**
 * @brief Destructeur de FJoueur
 *
 * Libère les ressources utilisées par l'objet Joueur.
 */
FJoueur::~FJoueur()
{}

/**
 * @brief Affiche les informations du joueur
 * @warning Ne sert qu'à afficher dans la console
 * Cette fonction affiche les propriétés de l'objet Joueur : le pseudo, le nombre de pièces et le score
 */
void FJoueur::AfficherInformations() const
{
    std::cout << "Pseudo : " << Pseudo << std::endl;
    std::cout << "Nombre de pièces : " << NbPieces << std::endl;
    std::cout << "Score : " << Score << std::endl;
}