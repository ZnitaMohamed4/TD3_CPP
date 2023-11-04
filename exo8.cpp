#include <iostream>
using namespace std;

template <class T>
T Carre(T & nbr) {
    return T(nbr * nbr);
 }

int main()
{
    int n;
    cout << "Veuiller Tapez un entier :  ";
    cin >> n;
    
    cout << "La valeur carre de " << n << " est " << Carre(n);
    return 0;
}
