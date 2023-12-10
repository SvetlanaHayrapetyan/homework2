#include <iostream>

int main() {
    
    double x, y, r;
    std::cin >> x >> y >> r;

    if (x * x + y * y > r * r) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
