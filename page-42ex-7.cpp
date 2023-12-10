#include <iostream>

int main()
{
    unsigned int x, y, x1, y1, x2, y2;
    
    std::cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    
     if (x >= x1 && x <= x2 && y <= y1 && y >= y2) {
         std::cout << "YES" << std::endl;
        
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
