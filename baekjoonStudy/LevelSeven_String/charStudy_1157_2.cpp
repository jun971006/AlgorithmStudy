#include <iostream>
#include <string>
#include <algorithm>
#define AP 26
using namespace std;
int main()
{
	string str;
	cin >> str;
	int A[AP]={0};
	
	for(int i=0; i<str.size(); i++){
		str[i] = toupper(str[i]);
	}	
	
	for(int i=0; i<str.size(); i++){
		A[str[i]-'A']+=1;
	}
	int max=*max_element(A, A+AP);
	int cnt=0;
	int idx=0;
	for(int i=0; i<AP; i++){
		if(A[i]==max){
			idx=i;
			cnt+=1;
		}		
	}
	
	if(cnt>=2)
		cout << "?" << endl;
	else
		cout << char(idx+int('A')) << endl;
}
