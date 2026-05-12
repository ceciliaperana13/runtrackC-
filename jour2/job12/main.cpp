#include <iostream>

int main() {
    int n;
    double somme = 0.0;

    std::cout << "Entrez un entier n : ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        somme += 1.0 / i;
    }

    std::cout << "Somme harmonique des " << n << " premiers termes : " << somme << std::endl;

    return 0;
}
