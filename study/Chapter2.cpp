#include <iostream>//화면에 출력하는 만들어둔 프로그램을 가져옴

//메모리에 숫자,문자열,문자 등등 저장하는데 이것을 객체라고함
//객체는 메모리에 변수는 메모리에 담겨있는 객체를 사용하기 위한 이름, 또 주소의 다름 이기도 하다



int main(){
	
	int x;
	x = 123; //assignment 할당하다
	
	
	std::cout << x << std::endl;
	std::cout << &x << std::endl;  //&변수를 실행하면 변수의 주소를 출력한다
	
	return 0;
}