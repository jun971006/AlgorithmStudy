#include <iostream>

using namespace std;

int sum(int x, int y){
		return x + y;
}

int main(){
	
	
	cout << sum(1, 2) << '\n';
	
	cout << [](int x, int y) {		// ���� �Լ� : [ĸ��](�Լ� ����){�Լ� ����} 
		return x + y;
	}(1, 2) << '\n';
} 
