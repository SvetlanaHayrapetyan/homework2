#include <iostream>

int main() {
    
    int a, a1, a2;
    int b, b1, b2;
    
    std::cin >> a >> a1 >> a2;
    std::cin >> b >> b1 >> b2;
    
    if ((a1 == a2 && b1 == b2 && c1 == c2) ||
        (a1 == b2 && b1 == c2 && c1 == a2) ||
        (a1 == c2 && b1 == a2 && c1 == b2))   {
        std::cout << "YES" << std::endl;
            } 
    
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
