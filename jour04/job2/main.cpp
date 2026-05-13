//deux variables, chacune contenant un entier. En utilisant des pointeurs, intervertissez les valeurs des deux variables. ecris simplement 
#include <iostream>

void echanger(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    std::cout << "Avant échange : x = " << x << ", y = " << y << std::endl;

    echanger(&x, &y);

    std::cout << "Après échange : x = " << x << ", y = " << y << std::endl;

    return 0;
}
