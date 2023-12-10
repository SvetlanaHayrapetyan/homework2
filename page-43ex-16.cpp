#include <iostream>

int main(){ 
    
	int a;
	int b;
	int c;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	
	if ((a < b && b < c) || (a > b && b > c))
	{
		a *= 2;
		b *= 2;
		c *= 2;
	}
	else
	{
		a *= -1;
		b *= -1;
		c *= -1;
	}
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	
	return 0;
}
