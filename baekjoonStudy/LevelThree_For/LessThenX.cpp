#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	
	int N, X;
	int num;
	cin >> N >> X;
	for(int i=0;i<N;i++){
		cin >> num;
		if(num < X){
			cout << num << " ";
		}
	}
	return 0;
}

