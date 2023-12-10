#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    if(a==b || b==c || a==c)
       std::cout << "YES" << std::endl;
       
    else
       std::cout << "NO" << std::endl;
       
    return 0;
}
