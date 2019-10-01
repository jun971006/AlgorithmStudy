#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> a = {1, 4, 1, 2, 4, 2, 4, 2, 3, 4, 4};
	int even = count_if(a.begin(), a.end(), [](int x) {	// ************ [](int x) return x % 2 == 0;
		return x % 2 == 0;
	});
	int odd = count_if(a.begin(), a.end(), [](int x){
		return x % 2 == 1;
	});
	
	cout << "¦���� ���� : " << even << '\n';
	cout << "Ȧ���� ���� : " << odd << '\n';
}
