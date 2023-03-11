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
	
	/*-x라면 x를 음수로 바꾸는 연산자이기 때문에 단항 연산자이다.
	1 + 2 는 피연산자가 양쪽에 2개이기 때문에 이항 연산자라고 부른다.*/
	int y = ( x > 0) ? 1 : 2; //()안에 있는 수식이 참이라면 : 의 왼쪽 값을 출력, 아니라면 오른쪽 값을 출력 시킨다.
	         //위의 식이 삼항 연산자이다.
	
	int p = ( y > 10) ? 1 : 2;
	cout << y << endl; //부등호 식이 참이기때문에 1을 출력.//
	cout << p << endl; //부등호 식이 거짓이기 떄문에 2를 출력
	/*조건 연산자(Conditional operator)는 C++언어의 유일한 삼항 연산자(Ternary operator)이다.*/
	
	
	return 0;
}