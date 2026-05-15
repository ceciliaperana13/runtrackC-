//qui prend en entrée une chaîne de caractères. Inverser la chaîne de caractères à l’aide des pointeurs.
#include <iostream>

void echanger(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int* x = new int(10);
    int* y = new int(20);

    std::cout << "Avant échange : x = " << *x << ", y = " << *y << std::endl;

    echanger(x, y);

    std::cout << "Après échange : x = " << *x << ", y = " << *y << std::endl;

    delete x;
    delete y;

    return 0;
}
// new allocation dynamique
// delete libère la mémoire allouée