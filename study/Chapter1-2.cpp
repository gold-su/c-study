#include <iostream>//화면에 출력하는 만들어둔 프로그램을 가져옴

//메모리에 숫자,문자열,문자 등등 저장하는데 이것을 객체라고함
//객체는 메모리에 변수는 메모리에 담겨있는 객체를 사용하기 위한 이름, 또 주소의 다름 이기도 하다



int main(){
	
	int x = 123; //initialization 이니셜라이제이션 기계를 시동 가능한 상태로 만들기 위한 조작. 또는 데이터 매체를 사용하기 전이나 처리하기 전에 필요한 조작
	x = 123; //assignment 할당하다
	
	
	std::cout << x << std::endl;
	std::cout << &x << std::endl;  //&변수를 실행하면 변수의 주소를 출력한다
	
	return 0;
}