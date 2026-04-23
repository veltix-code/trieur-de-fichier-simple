#include "dialogue.h"
#include "trieur.h"
#include "architecture.h"
#include <iostream>
using namespace std;
int main()
{
    int ChoixMethode1 = 0;
    int ChoixMethode2 = 1; // Valeur par défaut : "Laisser" (1)

    premierDialogue();
    
    // Demande Copier ou Déplacer
    ChoixMethode1 = stoi(choix("Voulez-vous :", "Copier (recommande)", "Deplacer"));
    
    // Demande TOUJOURS la gestion des doublons, peu importe la méthode
    ChoixMethode2 = stoi(choix("Si le fichier existe deja :", "Laisser", "Ecraser"));

    listerFichier();
    creerDossiers();
    trierFichier(ChoixMethode1, ChoixMethode2);

    afficherMessage("Tri terminé avec succes !");
    cin.get();
    return 0;
}