// boucle for classique avec reference comme demander 

#include <iostream>

int main() {
    int tab[5] = {1, 2, 3, 4, 5};

    // Boucle for classique avec références
    for (int i = 0; i < 5; i++) {
        int& ref = tab[i];   // ref est une référence vers tab[i]
        std::cout << ref << std::endl;
    }

    return 0;
}
