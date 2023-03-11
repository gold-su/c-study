#include <iostream>

using namespace std;

	//리터럴 Literal
	//피연산자 Operand
	//단항 unary , 이항 binary, 삼항 ternary

int main(){
	
	int x = 2; // x is a variable(변수,변하기쉬운), 2 is a literal(그냥 숫자,정확한).
	    // =는 Assignment 대입 연산자이다. =은 같다라는 의미가 아니다, ==가 같다라는 의미.
	cout << 1 + 2 << endl; //1,2은 Literal, +는 연산자 , 1+2는 표현식(익스프레션)이다.
	cout << x + 2 << endl; //2인 x에다가 2를 더할땐, 연산의 대상을 피연산자라고 한다 Operand 
	cout << "전역마렵다\n"; //""(문자열)도 Literal
	
	return 0;
}