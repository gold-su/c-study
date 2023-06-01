#include <iostream>
#include <algorithm> //algorithm 안에 max가 있음

using namespace std;

#define MY_NUMBER "HELLO" //매크로는 대부분 대문자로 작성
#define MAX(a,b) (((a)>(b)) ? (a) : (b))//실행중에 MY_NUMBER를 만나면 뒤의 있는 걸로 교체함 숫자 문자 수식 뭐 등등

int main()
{
	
	cout << MY_NUMBER << endl;
	cout << MAX(1 + 3 ,2) << endl;
	cout << std::MAX(2 + 3 ,6) << endl;
	return 0;
}