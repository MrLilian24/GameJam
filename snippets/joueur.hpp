#pragma once
#include "CoreMinimal.h"

/**
 * @class FJoueur
 * @brief Classe représentant un joueur dans le jeu
 */
class FJoueur
{
public:
    /**
     * @brief Constructeur par défaut
     *
     * Initialise les propriétés de la classe Joueur avec des valeurs par défaut.
     */
    FJoueur();

    /**
     * @brief Constructeur avec valeurs initiales
     *
     * Permet de spécifier les propriétés lors de la création d'un objet Joueur.
     * 
     * @param InPseudo Le pseudo du joueur
     * @param InNbPieces Le nombre de pièces du joueur
     * @param InScore Le score du joueur
     */
    FJoueur(FString InPseudo, int32 InNbPieces, int32 InScore);

    /**
     * @brief Destructeur
     *
     * Libère les ressources utilisées par l'objet Joueur.
     */
    ~FJoueur();

    /**
     * @brief Retourne les informations du joueur
     * 
     * @return les informations du joueur sous la forme d'un objet FJoueurInfo
     */
    FJoueurInfo GetInformations() const;

private:
    /** Le pseudo du joueur */
    FString Pseudo;
    /* Le nombre de pièces du joueur */
    int32 NbPieces;
    /* Le score du joueur */
    int32 Score;
};

/**
 * @brief Struct contenant les informations d'un joueur
 * 
 * Cette structure contient les informations d'un joueur, y compris le pseudo, le nombre de pièces et le score.
 * Elle est utilisée pour retourner toutes les informations d'un joueur à la fois en utilisant la fonction GetInformations de FJoueur
 */
struct FJoueurInfo
{
    FString Pseudo;
    int32 NbPieces;
    int32 Score;
};

FJoueurInfo FJoueur::GetInformations() const
{
    return {Pseudo, NbPieces, Score};
}