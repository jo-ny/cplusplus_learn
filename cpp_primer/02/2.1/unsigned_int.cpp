#include<iostream>
int main(){
	// unsigned and unsigned
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	// int and int 
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;

	// unsigned and int 
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
	std::cout << i - u2 << std::endl;
	std::cout << u2 - i << std::endl;

	return 0;
}

