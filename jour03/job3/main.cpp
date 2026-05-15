//compare deux chaînes de caractères. Si les chaînes sont égales, 0 est retournée, sinon 1 est retourné.
#include <iostream>
#include <string>

int main() {
    std::string a, b;

    std::cout << "Entrez la première chaîne : ";
    std::getline(std::cin, a);

    std::cout << "Entrez la deuxième chaîne : ";
    std::getline(std::cin, b);

    if (a == b) {
        std::cout << 0;
    } else {
        std::cout << 1;
    }

    return 0;
}
//0 si elles sont égales

//1 si elles sont différentes