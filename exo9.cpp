#include <iostream>
using namespace std;

int main()
{
    
  /* Question a :
    Le code va provoquer une perte de donn�es car char est un type de donn�es qui
    stocke des caract�res plut�t que des nombres.Lorsque vous initialisez p
    avec 60 et 65, il y a une conversion de ces valeurs num�riques en caract�res selon la table ASCII,
    ce qui signifie que les caract�res correspondants � ces valeurs num�riques seront
    stock�s dans p.Cela ne correspond pas � l'affichage "Coordonnees : 60 65" que vous attendez.
  */


  /* Question b :
  Pour que les instructions pr�c�dentes affichent "Coordonnees : 60 65", 
  vous devriez modifier la d�finition du mod�le de classe point.
  Vous pouvez utiliser des types num�riques au lieu de char.

  point<int> p(60, 65);
  p.affiche();
  Cela affichera "Coordonnees : 60 65" comme attendu, car nous utilisons le type int pour les coordonn�es,
  ce qui convient aux valeurs num�riques.
  */


}

