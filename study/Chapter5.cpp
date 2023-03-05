#include <iostream> 

using namespace std;

int main(){
	
	int x;  //밑의 cin에서 입력받은 데이터를 저장할수 있는 변수를 먼저 선언해야됨.
	cin >> x;
	
	cout << "너가 입력한거 ㅋㅋ -> " << x << endl;  //저장할 변수가 int이기 때문에 정수만 저장이 가능하다
	
	int a = 5;
	
	cout << "Bfore your input. a was " << a << endl; //입력받기 전 a의 값은 5로 초기화 되어있었음. 
	cout << "a를 바꿔봐" << endl;
	
	cin >> a;
	cout << "after your a = " << a << endl;
	cout << "입력한" << a <<" 로 바뀌었지?" << endl;
	
	return 0;
}