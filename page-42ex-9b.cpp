#include <iostream>

int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int c;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
     if ((a==b && c!=a && c!=b) || (a==c && b!=a && b!=c) || (b==c && a!=b && a!=c) ) {
         std::cout << "YES" << std::endl;
        
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
