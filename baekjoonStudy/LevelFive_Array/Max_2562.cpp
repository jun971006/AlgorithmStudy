#include <iostream>
#define N 9
using namespace std;
int main()
{
	cin.tie(NULL);
	int arr[N];
	int max=0;
	int inx=0;
	int num;
	
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i<N; i++){
		
		if(arr[i]>=max){
			max=arr[i];
			inx=i;
		}
	}
	
	cout << arr[inx] << endl;
	cout << inx+1;
} 	
