#include <iostream>
using namespace std;

int main()
{
    
  /* Question a :
    Le code va provoquer une perte de données car char est un type de données qui
    stocke des caractères plutôt que des nombres.Lorsque vous initialisez p
    avec 60 et 65, il y a une conversion de ces valeurs numériques en caractères selon la table ASCII,
    ce qui signifie que les caractères correspondants à ces valeurs numériques seront
    stockés dans p.Cela ne correspond pas à l'affichage "Coordonnees : 60 65" que vous attendez.
  */


  /* Question b :
  Pour que les instructions précédentes affichent "Coordonnees : 60 65", 
  vous devriez modifier la définition du modèle de classe point.
  Vous pouvez utiliser des types numériques au lieu de char.

  point<int> p(60, 65);
  p.affiche();
  Cela affichera "Coordonnees : 60 65" comme attendu, car nous utilisons le type int pour les coordonnées,
  ce qui convient aux valeurs numériques.
  */


}

