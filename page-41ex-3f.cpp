#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    if(a==-1*b || a==-1*c || b==-1*a || b==-1*c || c==-1*a || c==-1*b)
       std::cout << "YES" << std::endl;
       
    else
       std::cout << "NO" << std::endl;
       
    return 0;
}
