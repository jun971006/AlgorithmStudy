#include <iostream>
using namespace std;
#define mod 10007

int main()
{
	int d[1001][10]={0};
	
	for(int i=0; i<10; i++)
		d[1][i] = 1;
		
	int n=0;
	cin >> n;	
		
	for(int i=2;i<=n; i++){
		for(int j=0; j<=9; j++){
			for(int k=j; k<=9; k++){
				d[i][k] += d[i-1][j];
				d[i][k] %= mod;
			}
		}
	}
	
	int sum = 0;
	for(int i=0; i<=9; i++){
		sum += d[n][i];
	}
	
	cout << sum%mod << endl;
	return 0;
}
