#include <iostream>
using namespace std;

int main()
{
	int T=0;
	int A=0,B=0;
	
	cin >> T;
	int arr[T]={0};
	for(int i=0;i<T;i++){
		cin >> A >> B;
		arr[i] = A+B;
		A=0, B=0;
	}
	for(int i=0;i<T;i++){
		cout << arr[i] << endl;
	}
	
	return 0;
	
}
