#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main() {

    std::cout << "Total animaux au début : "
              << Animal::getTotalAnimaux() << std::endl;

    Chien c1("Rex");
    Chat  c2("Mimi");
    Chien c3("Bolt");
    Chat  c4("Luna");

    std::cout << "\n=== Cris ===" << std::endl;
    c1.crier();
    c2.crier();
    c3.crier();
    c4.crier();

    std::cout << "\n=== Nourriture ===" << std::endl;
    c1.manger();
    c2.manger();

    std::cout << "\nTotal animaux créés : "
              << Animal::getTotalAnimaux() << std::endl;

    return 0;
}
