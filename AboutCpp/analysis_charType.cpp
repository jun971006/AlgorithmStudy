#include <iostream> 
#include <string>

using namespace std;
int main()
{
	string s;
	while(getline(cin, s)) {		// ���� �Է¹޴� �Լ� getline(cin, s) 
		int lower = 0;				// getline�Լ����� 3��° ���ڴ� ������!!! 
		int upper = 0;				// ex) getline(cin, s, ',') -> ,���� �Է¹޴´�.*** 
		int number = 0;
		int space = 0;
		for(char x:s){				// for�� ���ؼ� �ѱ����ѱ��� �м�***** 
			if(x >= 'a' && x <= 'z'){	// �ҹ��� 
				lower += 1;
			} else if(x >= 'A' && x<='Z'){	// �빮�� 
				upper += 1;
			} else if(x >= '0' && x <= '9'){ 	// ���� 
				number += 1;
			} else if(x == ' '){	// ���� 
				space += 1;
			}
		}
		cout << lower << ' ' << upper << ' ';
		cout << number << ' ' << space << '\n';
	}
	return 0;
}
