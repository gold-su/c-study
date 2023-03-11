#include <iostream>

using namespace std;

void dosomething(int x)
{
	
	x = 123;  // x는 123이 된다. //그냥 초기화 시켰다고 보일수 있지만, 함수에서 int로 지정해줬기 때문에 main에서 적용이 안될 것이다.
	cout << x << endl; //x는 123이 출력된 뒤에,
}

int main(){

	int x = 0;
	
	cout << x << endl; //여기서는 바로 위의 x = 0의 값이 출력되고
	dosomething(x); //여기서 위의 함수로 올라간뒤
	cout << x << endl; //다시 같은 괄호에 있는 int로 인해서 0이 출력된다.
	
	
	
	return 0;
}