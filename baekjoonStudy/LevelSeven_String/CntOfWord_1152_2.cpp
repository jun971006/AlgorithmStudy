#include <iostream>
#include <string>
using namespace std;
int main()
{	
	string str;
	int cnt=0;
	getline(cin, str);
	
	for(int i=0; i<str.size();i++){
		if(str[i]==' ' && i==0)		// ù��° ���� 
			continue;
		else if(str[i]==' ' && i+1==str.size()){	// ������ ���� 
			continue;
		}
		else if(str[i]==' '){	// ù��°, ������ ������ ������ ���� 
			cnt+=1;
		}		
		else{			// �Ϲ� ���ڿ� 
			continue;
		}
	}
	cnt+=1;
	cout << cnt << endl;
	return 0;
}
