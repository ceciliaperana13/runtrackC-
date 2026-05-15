#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main() {

    Chien chien;
    Chat chat;

    std::cout << "=== Chien ===" << std::endl;
    chien.crier();
    chien.manger();

    std::cout << "\n=== Chat ===" << std::endl;
    chat.crier();
    chat.manger();

    return 0;
}
