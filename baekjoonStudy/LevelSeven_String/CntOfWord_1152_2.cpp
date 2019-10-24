#include <iostream>
#include <string>
using namespace std;
int main()
{	
	string str;
	int cnt=0;
	getline(cin, str);
	
	for(int i=0; i<str.size();i++){
		if(str[i]==' ' && i==0)		// 첫번째 공백 
			continue;
		else if(str[i]==' ' && i+1==str.size()){	// 마지막 공백 
			continue;
		}
		else if(str[i]==' '){	// 첫번째, 마지막 제외한 나머지 공백 
			cnt+=1;
		}		
		else{			// 일반 문자열 
			continue;
		}
	}
	cnt+=1;
	cout << cnt << endl;
	return 0;
}
