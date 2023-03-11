#include <iostream>

using namespace std;

int sum1(int a,int b)
{
	int s1 = a + b;
	return s1;
}

int sum2(int c,int d)
{
	int s2 = c * d;
	return s2;
}

int sum3(int e,int f) 
{
	int s3 = e / f;  //밑에서 입력받은 e,f를 나눠준뒤, s3에 저장한다.
	return s3; //계산된 s3를 밑의 main에 return 시켜준다. 그 뒤에 바로 출력된다.
}

void textPint(){
	cout << "코드가 종료되었습니다." << endl;
	return; 
}

int main(){
	
	int a,b;
	cout << "더할 두 숫자를 입력하세요." << endl;
	cin >> a >> b ;
	cout << "두 수의 합은 : " << sum1(a, b) << " 입니다."<< endl;
	
	int c,d;
	cout << "곱할 두 수를 입력하세요." << endl;
	cin >> c >> d ;
	cout << "두 수의 곱은 : " << sum2(c, d) << " 입니다."<< endl;
	
	int e,f; //cint에서 입력받을 값을 미리 지정
	cout << "나눌 두 숫자를 입력하세요." << endl;
	cin >> e >> f ; //값을 입력 받는다.
	cout << "두 수룰 나눈 값은 : " << sum3(e, f) << " 입니다."<< endl; //sum3에 입력받은 e,f를 저장
	
	textPint();
	
	return 0;
}