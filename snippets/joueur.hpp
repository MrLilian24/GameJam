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

private:
    /** Le pseudo du joueur */
    FString Pseudo;
    /* Le nombre de pièces du joueur */
    int32 NbPieces;
    /* Le score du joueur */
    int32 Score;
};