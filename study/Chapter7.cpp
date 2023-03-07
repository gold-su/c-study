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
	int s3 = e / f;
	return s3;
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
	
	int e,f;
	cout << "나눌 두 숫자를 입력하세요." << endl;
	cin >> e >> f ;
	cout << "두 수룰 나눈 값은 : " << sum3(e, f) << " 입니다."<< endl;
	
	return 0;
}