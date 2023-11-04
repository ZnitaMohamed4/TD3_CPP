#include <iostream>

using namespace std;

class Complexe {
private:
    double reel;
    double imaginaire;

public:
    Complexe(double reel = 0.0, double imaginaire = 0.0)
        : reel(reel), imaginaire(imaginaire) {}

    Complexe operator+(const Complexe& autre) const {
        return Complexe(reel + autre.reel, imaginaire + autre.imaginaire);
    }

    Complexe operator-(const Complexe& autre) const {
        return Complexe(reel - autre.reel, imaginaire - autre.imaginaire);
    }

    Complexe operator*(const Complexe& autre) const {
        return Complexe((reel * autre.reel) - (imaginaire * autre.imaginaire),
                       (reel * autre.imaginaire) + (imaginaire * autre.reel));
    }

    Complexe operator/(const Complexe& autre) const {
        double denominateur = (autre.reel * autre.reel) + (autre.imaginaire * autre.imaginaire);
        return Complexe(((reel * autre.reel) + (imaginaire * autre.imaginaire)) / denominateur,
                       ((imaginaire * autre.reel) - (reel * autre.imaginaire)) / denominateur);
    }

    void afficher() const {
        cout << "Partie reelle : " << reel << ", Partie imaginaire : " << imaginaire << "i" << endl;
    }
};

int main() {
    double reel1, imaginaire1, reel2, imaginaire2;
    
    cout << "Entrez la partie reelle du premier nombre complexe : ";
    cin >> reel1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> imaginaire1;

    cout << "Entrez la partie reelle du deuxieme nombre complexe : ";
    cin >> reel2;
    cout << "Entrez la partie imaginaire du deuxieme nombre complexe : ";
    cin >> imaginaire2;

    Complexe complexe1(reel1, imaginaire1);
    Complexe complexe2(reel2, imaginaire2);

    Complexe addition = complexe1 + complexe2;
    Complexe soustraction = complexe1 - complexe2;
    Complexe multiplication = complexe1 * complexe2;
    Complexe division = complexe1 / complexe2;

    cout << "Reesultats des operations : " << endl;
    cout << "Addition : ";
    addition.afficher();
    cout << "Soustraction : ";
    soustraction.afficher();
    cout << "Multiplication : ";
    multiplication.afficher();
    cout << "Division : ";
    division.afficher();

    return 0;
}

