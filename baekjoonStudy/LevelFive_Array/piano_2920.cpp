#include <iostream>
using namespace std;
int main()
{
	int arr[8];
	int cnt=0;
	for(int i=0; i<8; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i<8; i++){
		if(arr[i] == i+1)
			cnt+=1;
		else if(arr[i] == 8-i)
			cnt+=10;
		else
			cnt+=100;
	}
	if(cnt==8)
		cout << "ascending" << '\n';
	else if(cnt==80)
		cout << "descending" << '\n';
	else
		cout << "mixed" << '\n';
		
	return 0;
	
	
}
