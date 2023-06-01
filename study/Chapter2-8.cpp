#include <iostream>


namespace Myspace1 //namespce로 선언 후 함수 이름이 중복되는 함수를 안에 넣어서 같이 활용할수 있음
{
	int add(int a, int b)
	{
	return a + b;
	
	}
	
}



int add(int a, int b)
{
	return a * b;
	
}
using namespace std;

int main(){
	
	cout << Myspace1::add(3,5) << endl;  //namespace 안에 있는 중복되는 함수는 namespace 이름 :: 함수 이름 << 이렇게 사용할수 있음
	cout << add(3,5) << endl;
	
	return 0;
}
