#include <iostream>
using namespace std;
int main(){
	cin.tie(NULL);
	int A, B;
	
	while(cin >> A >> B){		// while�� ���ο��� bool���� �����ϱ� ������ 
								// EOF�� �ԷµǸ� while���� ����ȴ�. (ctrl+z)
		cout << A + B << '\n';
	}
	return 0;
}
