#include <iostream>

using namespace std;

int addTwoNumbers(int num_a, int num_b) //함수의 이름은 가급적 자세히 적는게 좋다.
{
	int sum = num_a + num_b ;
	
	return sum; //return하는 값과 함수의 타입이 값아야 함(int)
}

int multiplyoneNumbers(int num_c, int num_d) 
{
	int sum = num_c * num_d ; //연산자만 바꿔서 출력도 가능함
	
	return sum; 
}

int threeNumbers(int num_f, int num_g) 
{
	int sum = num_f / num_g ;
	
	return sum; 
}

void textPrint(){
	
	cout << "main에 함수가 나오면 위에 입력한 함수로 올라와서" << " 함수안에 있는 코드를 실행한뒤 return값으로 main으로 돌려보낸다" <<endl;

	return; //void textPrint에서는 돌려줄 값이 없기 때문에 return으ㅜㄹ 적지 않아도 된다.
}

int addtoo(int a, int b){
	
	return a + b; //main에 a + b를 돌려줌
}

int practice(int ar, int sr)
{
	int summ = ar *  sr;
	
	return summ;
}




int spl(int s,int p)
{
	int spll = s / p ;

	return spll;
	
}






int main(){
	
	
	cout << addTwoNumbers(1,2) << endl; //함수를 이용해서 같은 값을 출력할수 있음
	cout << addTwoNumbers(2,5) << endl;
	
	cout << multiplyoneNumbers(1,2) << endl; 
	cout << multiplyoneNumbers(2,5) << endl;
	
	cout << threeNumbers(2,1) << endl; 
	cout << threeNumbers(5,2) << endl;
	
	textPrint(); 
	cout << "\n" ;
	
	int sum = addtoo(2,5); //addtoo함수로 2,5를 준뒤 addtoo에서 받은 리턴값을 sum에 출력
	cout << sum << endl;

	cout << practice(40,20) << endl;
	
	cout << spl(100,2) << endl;
	
	
	
	return 0;
}
 