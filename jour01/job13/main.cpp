//l'utilisateur de taper un entier N et qui calcule la somme des cubes de 5^3 à N^3.
#include <iostream>

int main() {
    int N;
    std::cout << "Entrez un entier N: ";
    std::cin >> N;

    long long sum = 0;
    for (int i = 5; i <= N; i++) {
        long long cube = static_cast<long long>(i) * i * i;
        sum += cube;
    }

    std::cout << "La somme des cubes de 5^3 à " << N << "^3 est: " << sum << std::endl;

    return 0;
}