#include <iostream>
#include <string>
#define AP 26
using namespace std;
int main()
{
	string str;
	string ans;
	cin >> str;
	int A[AP]={0};
	
	for(int i=0; i<str.size(); i++){
		str[i] = toupper(str[i]);
	}
	
	for(int i=0; i<str.size(); i++){
		A[int(str[i])-int('A')] += 1;
	}
	for(int i=0; i<str.size(); i++){
		cout << str[i] << endl;
	}
	int max=str[0];
	for(int i=0; i<str.size();i++){
		if(str[i]>=max){
			max=str[i];
		}
	}
	for(int i=0; i<str.size();i++){
		if(max==str[i])
			ans+= char(i+65);
	}
	
	if(ans.size()>1){
		cout << "?" << endl;
	}
	else{
		cout << ans << endl;
	}
	
	return 0;
	
}
