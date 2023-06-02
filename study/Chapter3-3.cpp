#include <iostream>
#include <algorithm>
using namespace std;

//#define LIKE_APPLE  //define은 선언문 뒤에 껄로 교체를 하지만 밑의 전처리기 안에서는 그런식으로 작용이 안됨  //define의 선언은 이 파일에서만 해당됨 

int main()
{
	#ifdef LIKE_APPLE             //def는 define의 약자
	cout << "Apple " << endl;
	
	
	#ifndef LIKE_APPLE           //ndef는 not define의 약자    그냥 실행하면 얜 안 찾음 근데 위의 define를 // 치면 Orange가 출력
	cout << "Orange " << endl;
	#endif
	
	
	#ifdef LIKE_APPLE           
	cout << "Apple " << endl;
	
	#else //로 이런식으로 작성할수 있음
	
	cout << "Orange " << endl;
	#endif
	

	return 0;
}