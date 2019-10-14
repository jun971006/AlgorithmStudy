#include <iostream>
#include <math.h>
#define mod 16769023

using namespace std;

int main() {
	unsigned long long n = 0;
	long double result = 1;
	unsigned long long result2 = 0;

	cin >> n;
	if (n % 2 != 0) {
		n += 1;
	}
	n /= 2;
	result = pow(2, n);
	
	result2 = round(result);

	cout << result2 % mod; 
}
