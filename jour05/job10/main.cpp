#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main() {

    Chien chien;
    Chat chat;

    std::cout << "=== Tests Chien ===" << std::endl;
    chien.crier();
    chien.manger();

    std::cout << "\n=== Tests Chat ===" << std::endl;
    chat.crier();
    chat.manger(); // version héritée
    chat.manger("des croquettes"); // version avec paramètre
    chat.manger("du poulet");      // autre test

    return 0;
}
