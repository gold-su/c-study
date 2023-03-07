#include <iostream>

using namespace std;

int addTwoNumbers(int num_a, int num_b) //함수의 이름은 가급적 자세히 적는게 좋다.
{
	int sum = num_a + num_b ;
	
	return sum; //return하는 값과 함수의 타입이 값아야 함(int)
}

int main(){
	
	
	cout << addTwoNumbers(1,2) << endl; //함수를 이용해서 같은 값을 출력할수 있음
	cout << addTwoNumbers(2,5) << endl;
	cout << 2 + 8 << endl;
	
	
	return 0;
}