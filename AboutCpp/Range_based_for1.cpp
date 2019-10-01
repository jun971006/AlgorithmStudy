#include <iostream>
#include <string>

using namespace std;

int main(){
	const char cstr[] = "string";	// 배열은 null문자까지 포함되어 길이가 7 
	int sum=0;
	for(auto x : cstr) {
		sum+=1;
	}
	cout << "sum= " << sum <<'\n';
	
	string str = "string";		// string은 글자의 개수인 길이가 6 
	sum = 0;
	for(auto x : str){
		sum+=1;
	}
	cout << "sum= " << sum <<'\n';
}
