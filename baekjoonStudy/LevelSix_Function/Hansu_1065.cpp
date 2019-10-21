#include <iostream>
using namespace std;

bool Hansu(int num){
	if(num==1000)
		return false;
	int num1=num%10;
	num/=10;
	
	if(num==0)
		return true;
		
	int num2=num%10;
	num/=10;
	if(num==0)
		return true;
		
	int num3=num%10;
	
	int dif1 = num1 - num2;
	int dif2 = num2 - num3;
	
	if(dif1 == dif2)
		return true;
	
	return false;
}
int main()
{
	int N;
	int cnt=0;
	cin >> N;
	
	bool arr[N+1]={false};
	for(int i=1; i<N+1; i++){
		arr[i] = Hansu(i);
	}
	
	
	for(int i=1; i<N+1; i++){
		if(arr[i])
			cnt+=1;
	}
	cout << cnt << '\n';
	return 0;
}
