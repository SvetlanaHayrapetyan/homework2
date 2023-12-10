#include <iostream>

int main()
{
    int a;
    
    std::cin >> a;
    
    if(a<100 || a>999){
        
        std::cout << " " << std::endl;
        
    }
    
    else{
       int number1 = a/100 ;
       int number2 = (a/10) % 10 ;
       int number3 = a % 10 ;
       
       
       if (number1 <= number2 && number2 <= number3 && number1 < number3 )   {
          std::cout << "YES" << std::endl;
        }
       else {
          std::cout << "NO" << std::endl;
        }  
    }
    return 0;
}
