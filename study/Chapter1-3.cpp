#include <iostream>

int main(){
	
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl;
	
	int y = x;
	std::cout << y << std::endl;
	
	//is (x+y) l-value or r-value ?   r-value
	std::cout << x+y << std::endl;
	
	std::cout << x << std::endl;
	
	int z; //z값을 초기화(값 지정)을 해주지 않았기 때문에 0출력
	std::cout << z << std::endl;
	
	return 0;
}