#include <iostream>

int main(){ 
    
	int n;
	std::cin >> n; 
	
	int degree = 1;
	for (int i = 1; i <= 9; i++)
	{
	    degree *= n;
		std::cout << degree << " ";
	}
	return 0;
	
}
