#include <iostream>

using namespace std;

int sum(int x, int y){
		return x + y;
}

int main(){
	
	
	cout << sum(1, 2) << '\n';
	
	cout << [](int x, int y) {		// 람다 함수 : [캡쳐](함수 인자){함수 내용} 
		return x + y;
	}(1, 2) << '\n';
	
	auto sum2 = [](int x, int y){	// 람다 함수 : [캡쳐](함수 인자){함수 내용}
		return x + y;
	};
	
	cout << sum2(1, 2)<< '\n';
	
	/*
	****람다 함수**** 
	
	[캡쳐](함수 인자){함수 내용}
	
	캡쳐에 &을 넣으면 선언하는 시점에서 바깥에 있는 변수를 모두 사용할 수 있다
	
	&x와 같이 어떤 변수를 사용할 것인지 적을 수도 있다
	
	&은 참조이고, = 는 값 복사이다
	
	여러개는 , 를 이용할 수 있다 
	*/
} 
