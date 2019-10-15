#include <iostream>
using namespace std;
int main(){
	cin.tie(NULL);
	int A, B;
	
	while(cin >> A >> B){		// while문 내부에서 bool값을 감지하기 떄문에 
								// EOF이 입력되면 while문이 종료된다. (ctrl+z)
		cout << A + B << '\n';
	}
	return 0;
}
