#include <iostream> // cout, cin, endl, ~~

int main(){
	
	using namespace std;; //cout cin endl 등등 std를 생략하고 코드를 작성할수 있게 해줌.
	 
	cout << "I Love YOU" << endl;
	
	int x = 1024;
	double pi = 3.141592;
	cout << "x is " << x << " pi is " << pi << endl;
	
	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl; //\t는 [tap]키와 같다, 위에서 출력하는 cout과 \t로 줄맞춤을 할수 있음. 표나 구구단 등등 출력할때 도움이 됨 
	cout << "\n\n\n"; //\n은 new line이라는 의미임. endl과 거의 동일한 기능을 함.
	                  //여러번도 가능함
	cout << "\a"; //오디오의 약자임, 오디오 소리를 출력시켜줌, 원래는 띠로롱 하고 소리가 나온다
	
	
	return 0;
}