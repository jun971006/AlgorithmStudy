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
	auto last = unique(a.begin(), a.end());		// begin ~ end ���� ���ӵǴ� ���� �� �ϳ� �����ϰ� ���� 
	for(int x : a) {							// �ߺ��Ǵ� ���� �����ϰ� �տ������� ä���.. 
		cout << x << ' ';						// ���� �ڸ��� �ִ� ���ڵ��� �״�� �����´�. 
	}
	// 1, 2, 3, 1, 2, (3, 1, 1, 1, 2, 2, 2, 2)	// ��ȣ ģ �κ��� �״�� �������� �ȴ�. 
	cout << '\n';
	for(auto it = a.begin(); it !=last; ++it){
		cout << *it << ' ';
	}
	cout << '\n';
} 
