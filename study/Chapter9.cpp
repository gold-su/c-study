#include <iostream>

using namespace std;

int main(){
	
	int x(0); // x = 0; main의 중괄호를 넘어가면 x는 사라짐
	cout << x << " " << &x << endl; //&는 메모리의 주소를 볼수 있다.
	
	{
		//중괄호 안에 중괄호도 가능
		int x = 1 ;
		cout << x << " " << &x << endl; 
	}
	// {
	// 	int x = 2;   //중괄호마다 생성가능
	// 	int x = 5;   //하지만 같은 곳 안에 똑같은 변수는 오류가 난다.
	// }
	cout << x << " " << &x << endl; //위 괄호 안에 있는 x는 괄호를 벗어난 뒤에는 스택메모리로 반납된다.
	
	cout << "출력시의 x의 값이랑 주소가 다르다.\n" ;
	
	int b(3); 
	cout << b << " " << &b << endl; 
	
	{
		b = 5; //초기화를 안하고 같은 메모리를 사용하는 변수기 때문에 괄호를 나가서도 적용된다.
		cout << b << " " << &b << endl; 
	}
	
	cout << b << " " << &b << endl; 
	
	return 0;
}