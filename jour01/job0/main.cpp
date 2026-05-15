#include <iostream>

int main() {
    int a, x = 3, y = 5, b = 2, c = 4, d = 6, i = 1, n = 10, p = 20;

    // 1) a = (x+5)
    a = x + 5;
    std::cout << "1) a = x + 5 = " << a << std::endl;

    // 2) a = (x=y) + 2
    a = (x = y) + 2;
    std::cout << "2) a = (x = y) + 2 = " << a << " (x vaut maintenant " << x << ")" << std::endl;

    // 3) a = (x==y)
    a = x == y;
    std::cout << "3) a = x == y = " << a << std::endl;

    // 4) (a<b) && (c<d)
    bool result4 = a < b && c < d;
    std::cout << "4) a < b && c < d = " << result4 << std::endl;

    // 5) (i++) * (n+p)
    int result5 = i++ * (n + p);
    std::cout << "5) i++ * (n + p) = " << result5 << " (i vaut maintenant " << i << ")" << std::endl;

    return 0;
}
