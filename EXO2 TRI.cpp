#include <iostream>
#include <list>
using namespace std;

// Fonction pour trier une liste d'entiers avec le tri à bulles
void triBulle(list<int>& myList) {
    int n = myList.size();
    bool echange;
    do {
        echange = false;
        auto it1 = myList.begin();
        auto it2 = next(it1);
        for (int i = 0; i < n - 1; ++i) {
            if (*it1 > *it2) {
                swap(*it1, *it2);
                echange = true;
            }
            ++it1;
            ++it2;
        }
    } while (echange);
}

int main() {
    list<int> myList;
    int nombre;

    cout << "Saisissez des entiers (0 pour terminer) : ";
    while (cin >> nombre && nombre != 0) {
        myList.push_back(nombre);
    }

    // Trier la liste en utilisant le tri à bulles
    triBulle(myList);

    cout << "Liste triée : ";
    for (const int& element : myList) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}