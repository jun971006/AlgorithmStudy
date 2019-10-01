#include <iostream>
using namespace std;
int d[1000001];
int go(int n){
	if(n == 1){
		
		return 0;
		cout << "4" << endl;
	}
	if(d[n] > 0){
		cout << "5" << endl;
		return d[n];
	
	}
	d[n] = go(n-1) + 1;
	cout << "3" << endl;
	if(n%2==0){
		int temp = go(n/2) + 1;
		if(d[n] > temp){
			d[n] = temp;
		}
		cout << "2" << endl;
	}
	if(n%3==0){
		int temp = go(n/3) + 1;
		if(d[n] > temp){
			d[n] = temp;
		}
		cout << "1" << endl;
	}
	cout << "6" << endl;
	return d[n];
}

int main(){
	int n;
	cin >> n;
	cout << '\n' << "result =" << go(n) << '\n';
	return 0;
}
