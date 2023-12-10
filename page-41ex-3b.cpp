#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    if( a>0 || b>0 || c>0)
       std::cout << "YES" << std::endl;
       
    else
       std::cout << "NO" << std::endl;
       
    return 0;
}
