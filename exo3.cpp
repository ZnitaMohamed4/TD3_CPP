#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> personnes;
    int age;
    string prenom;
    string nom;

    while (true) {
        cout << "Entrez le nom (ou tapez 'exit' pour terminer) : ";
        cin >> nom;

        if (nom == "exit") {
            break;
        }
       
        cout << "Entrez le prenom : ";
        cin >> prenom;
        
        cout << "Entrez l'age : ";
        cin >> age;
  

        // Construire la ligne complete en utilisant les informations separee
        string personInfo = nom + " " + prenom + " " + to_string(age);
        personnes.push_back(personInfo);
    }

    personnes.sort(); // le triee de la liste personne par ordre alphabetique 

    cout << "Liste des personnes triee :" << endl;
    for (list<string>::iterator it = personnes.begin(); it != personnes.end(); ++it) {
        cout << *it << "\n"; // pour une bonne affichage 
    }

    return 0;
}
