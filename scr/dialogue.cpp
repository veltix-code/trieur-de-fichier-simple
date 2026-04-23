#include "dialogue.h"
#include <iostream>
using namespace std;

void effacerEcran()
{
    cout << "\033[2J\033[1;1H" << "\033[2J\033[1;1H" << endl; // ANSI escape code to clear the screen
}
void afficherMessage(string message)
{
    effacerEcran();
    cout << "---------------------------------------\n";
    cout << "\tTrieur de fichiers C++\n";
    cout << "---------------------------------------" << endl;
    cout << "Message: \n";
    cout << message << endl;
}
string choix(string question, string option1, string option2)
{
    string reponse;
    do
    {
        reponse = "";
        cout << question << " :\n"<< "1.\t" << option1 << "\n2.\t" << option2 << "\n3.\tQuitter\nVotre choix: ";
        cin >> reponse;
    } while (reponse != "1" && reponse != "2" && reponse != "3");
    if (reponse == "3"){exit(0);}
    return reponse;
}
void premierDialogue()
{
    afficherMessage("Ce programme trie les fichiers d'un dossier en fonction de leur extension.\nIl cree des sous-dossiers pour chaque type de fichier et y deplace les fichiers correspondants.\nIl va deplacer chaque fichier du repertoire de cet executable.");
    string reponse = choix("Voulez-vous continuer?", "Oui", "Non");
    if (reponse == "2"){
        afficherMessage("D'accord, a bientot!");
        cin.get();
        exit(0);
    }
    else{
        afficherMessage("Alors, commencons!");
        cin.get();
    }
}
void dernierDialogue()
{
    cout << "Il y a une erreur dans le programme, veuillez me contacter." << endl;
    cin.get();
}