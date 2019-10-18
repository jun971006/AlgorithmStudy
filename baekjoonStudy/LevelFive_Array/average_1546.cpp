#include <iostream>
using namespace std;
int main()
{
	int N;
	double sum=0;
	cin >> N;
	double arr[N];
	double M=0;
	
	for(int i=0; i<N; i++){
		cin >> arr[i];
		if(arr[i]>=M)
			M=arr[i];
	}
	
	for(int i=0; i<N;i++){
		arr[i] = arr[i]/M*100;
		sum+=arr[i];
	}
	
	double avg = sum/N;
	
	cout << avg << endl;
	
	return 0;
}
