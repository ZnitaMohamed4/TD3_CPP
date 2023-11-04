#include <iostream>
using namespace std;

class Test {
public:
    static int tableau[];
public:
    static int division(int indice, int diviseur) {
        if (diviseur == 0) {
            throw "Division par zero est impossible!";
        }

        if (indice < 0 || indice >= 10) {
            throw "Indice invalide!";
        }

        return tableau[indice] / diviseur;
    }
};

int Test::tableau[] = { 17, 12, 15, 38, 29, 157, 89, -22, 0, 5 };

int main() {
    int x, y;
    cout << "Entrez l'indice de l'entier a diviser (0-9) : " << endl;
    cin >> x;

    cout << "Entrez le diviseur: " << endl;
    cin >> y;

    try {
        int resultat = Test::division(x, y);
        cout << "La resultat de la division est: " << resultat << endl;
    }
    catch (const char * erorr) {
        cout << "Exception : " << erorr<< endl;
    }
   

    return 0;
}
