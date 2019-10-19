#include <iostream>
#define N 10001
using namespace std;

bool array[N]={false};
int d(int n);

int main()
{
	for(int i=1; i<N; i++){
		int idx = d(i);
		if(idx <= N){
			array[idx] = true;
		}
	}
	
	for(int i=1; i<N; i++){
		if(!array[i]) cout << i << '\n';
	}
	
	return 0;
}

int d(int n){
	int sum=n;
	
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
