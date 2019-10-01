#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> a = {1, 1, 2, 2, 2, 3, 1, 1, 1, 2, 2, 2, 2};
	// 1, 1, 2, 2, 2, 3,    (1, 1, 1, 2, 2, 2, 2)
	for(int x :a) {
		cout << x << ' ';
	}
	
	cout << '\n';
	auto last = unique(a.begin(), a.end());		// begin ~ end 에서 연속되는 같은 값 하나 제외하고 제거 
	for(int x : a) {							// 중복되는 값을 제외하고 앞에서부터 채운다.. 
		cout << x << ' ';						// 원래 자리에 있던 숫자들은 그대로 내려온다. 
	}
	// 1, 2, 3, 1, 2, (3, 1, 1, 1, 2, 2, 2, 2)	// 괄호 친 부분은 그대로 내려오게 된다. 
	cout << '\n';
	for(auto it = a.begin(); it !=last; ++it){
		cout << *it << ' ';
	}
	cout << '\n';
} 
