#include <iostream>

int main()
{
    int a;
    int b;
    
    std::cin >> a;
    std::cin >> b;
 
    if( a % 2 != 0 || b % 2 != 0  )
    std::cout << "YES" << std::endl;
    else 
     std::cout << "NO" << std::endl;

    return 0;
}
