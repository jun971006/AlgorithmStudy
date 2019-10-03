#include <iostream>
using namespace std;
int main()
{
	long long d[91] = {0};
	d[1] = 1;
	d[2] = 1;
	
	for(int i=3; i<=90; i++)	
		d[i] = d[i-1] + d[i-2];
	
	int n=0;
	cin >> n;
	
	cout << d[n] << endl;
}
