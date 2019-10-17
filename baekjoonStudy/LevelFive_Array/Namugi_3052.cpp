#include <iostream>
using namespace std;
int main()
{
	int num;
	int arr[42]={0};
	int cnt=0;
	
	for(int i=0;i<10; i++){
		cin >> num;
		if(num%42==0)
			arr[0]+=1;
		else
			arr[num%42] = num % 42;
	}
	for(int i=0; i<42;i++){
		if(arr[i]>0)
			cnt+=1;
	}
	
	cout << cnt << '\n';
	return 0;
}
