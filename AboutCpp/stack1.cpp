#include <iostream>
#include <stack>
#include <list>

using namespace std;

int main()
{
	stack<int> s1;
	stack<int, list<int>>s2;
	deque<int> d = {1, 2, 3, 4, 5};
	stack<int> s3(d);
	
	stack<int> s;
	
	for(int i=1; i<=5; i++) {
		s.push(i);
	}
	
	for(int i=0; i<2; i++) {
		cout << s.top() << '\n';
		s.pop();	
	}
	
	cout << "size = " << s.size() << '\n';
	
	
	for(int i=10; i>=6; i--) {
		s.push(i);
	}
	
	cout << "size = " << s.size() << '\n';
	cout << "empty = " << s.empty() << '\n';
	
	while(!s.empty()) {
		cout << s.top() << '\n';
		s.pop();
	}
	
	cout << "size = " << s.size() << '\n';
	cout << "empty = " << s.empty() << '\n';
}
