#include <iostream>
#include <list>

using namespace std;

void print(list<int> &l) {	// list print 함수 
    for (auto x : l)		// auto : compiler choose data type 
        cout << x << ' ';
    cout << '\n';
}

int main(){
	list<int> l = {2, 1, -5, 4, -3, 6, -7};
	print(l);
	
	l.sort(); 
	print(l);
	
	l.sort(greater<int>()); 	// 내림차순 정렬 
	print(l);
	
	l.sort([](int &u, int &v) {		// 절대값 오름차순 
		return abs(u) < abs(v);		// ******************람다 식 
	});
	print(l);
	
	l.reverse();
	print(l);
}
