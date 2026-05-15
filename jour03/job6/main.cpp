//demande à l'utilisateur de saisir 10 entiers stockés dans un tableau T. Le programme doit afficher le nombre d'entiers supérieurs ou égaux à 5.
#include <iostream>


int main() {
    const int SIZE = 10;
    int T[SIZE];
    int count = 0;

    std::cout << "Entrez " << SIZE << " entiers : ";
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> T[i];
        if (T[i] >= 5) {
            count++;
        }
    }

    std::cout << "Nombre d'entiers supérieurs ou égaux à 5 : " << count << std::endl;

    return 0;
}