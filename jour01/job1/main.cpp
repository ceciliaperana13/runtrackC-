#include <iostream>
#include <typeinfo>

int main() {
    char c = '\x01';      // c = 1
    short int p = 10;     // p = 10

    int x = p + 3;
    std::cout << "x = p + 3 = " << x << " (type de x: " << typeid(x).name() << ")" << std::endl;

    int y = c + 1;
    std::cout << "2) c + 1 = " << y 
              << " | type = int" << std::endl;

    int z = p + c;
    std::cout << "3) p + c = " << z 
              << " | type = int" << std::endl;  
    int w = 3 * p + 5 * c;
    std::cout << "4) 3*p + 5*c = " << w 
              << " | type = int" << std::endl;
    return 0;
}              