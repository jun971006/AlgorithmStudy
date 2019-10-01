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
} 
