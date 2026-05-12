
#include <iostream>

int main(){
    int n;
    std::cin >> n;
    switch(n)
{
    case 0 : std::cout << "Nul\n";
    case 1 :
    case 2 : std::cout << "Petit\n";
             break;
    case 3 :
    case 4 :
    case 5 : std::cout << "Moyen\n";
    default : std::cout << "Grand\n";
}
}
//case 0 → pas de break, donc on continue dans case 1, case 2, etc.

//case 1 et case 2 → affichent Petit, puis break.

//case 3, 4, 5 → affichent Moyen, puis continuent dans default (pas de break).

//default → affiche Grand.