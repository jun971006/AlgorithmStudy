#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int C,N;
	cin >> C;
	
	for(int i=0; i<C; i++){
		cin >> N;
		double arr[N];
		double sum=0;
		double cnt=0;
		for(int j=0; j<N; j++){
			cin >> arr[j];
			sum+=arr[j];
		}
		
		for(int j=0; j<N;j++){
			if(arr[j] > (sum/N))
			{
				cnt += 1;
			}
		}
		printf("%.3f\%%\n", cnt/N*100);
		
		
		
	}
	return 0;
}
