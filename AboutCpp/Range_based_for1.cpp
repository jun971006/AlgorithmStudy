#include <iostream>
#include <string>

using namespace std;

int main(){
	const char cstr[] = "string";	// �迭�� null���ڱ��� ���ԵǾ� ���̰� 7 
	int sum=0;
	for(auto x : cstr) {
		sum+=1;
	}
	cout << "sum= " << sum <<'\n';
	
	string str = "string";		// string�� ������ ������ ���̰� 6 
	sum = 0;
	for(auto x : str){
		sum+=1;
	}
	cout << "sum= " << sum <<'\n';
}
