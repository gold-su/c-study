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
	using nacespace Myspace1; //이런식으로 안에서 선언하면 밑에서 함수를 사용할때 Myspace1:: 를 안 붙혀도 됨.
	add(1,2);
	
	// cout << Myspace1::add(3,5) << endl;  
	// cout << add(3,5) << endl;
	
	return 0;
}
