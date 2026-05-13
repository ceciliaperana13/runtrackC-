//d'évaluer une note saisie au clavier,si la note est supérieure à 10 alors, il affiche “validé” sinon “non validé”. La note doit être comprise entre 0 et 20.
#include <iostream>


int main() {
    int n;

    do {
        std::cout << "Donnez une note entre 0 et 20 : ";
        std::cin >> n;

        if (n < 0 || n > 20) {
            std::cout << "La note doit être comprise entre 0 et 20.\n";
        }

    } while (n < 0 || n > 20);

    if (n > 10) {
        std::cout << "Validé\n";
    } else {
        std::cout << "Non validé\n";
    }

    return 0;
}