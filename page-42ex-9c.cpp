#include <iostream>

int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int c;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
     if ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b) ) {
         std::cout << "YES" << std::endl;
        
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
