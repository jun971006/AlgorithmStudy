#include <iostream> 
#include <string>

using namespace std;
int main()
{
	string s;
	while(getline(cin, s)) {		// 한줄 입력받는 함수 getline(cin, s) 
		int lower = 0;				// getline함수에서 3번째 인자는 구분자!!! 
		int upper = 0;				// ex) getline(cin, s, ',') -> ,빼고 입력받는다.*** 
		int number = 0;
		int space = 0;
		for(char x:s){				// for문 통해서 한글자한글자 분석***** 
			if(x >= 'a' && x <= 'z'){	// 소문자 
				lower += 1;
			} else if(x >= 'A' && x<='Z'){	// 대문자 
				upper += 1;
			} else if(x >= '0' && x <= '9'){ 	// 숫자 
				number += 1;
			} else if(x == ' '){	// 띄어쓰기 
				space += 1;
			}
		}
		cout << lower << ' ' << upper << ' ';
		cout << number << ' ' << space << '\n';
	}
	return 0;
}
