#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	vector<int> a = {5, 2, 4, 1, 3};
	
	priority_queue<int> q1; // 우선순위 큐 : 내림차순으로 값이 들어간다. 
	
	for(int x:a) {
		q1.push(x);
	}
	
	while(!q1.empty()){
		cout << q1.top() << ' ';
		q1.pop();
	}
	cout << '\n';
	
	priority_queue<int> q2;
	for(int x:a){
		q2.push(-x);
	} 
	
	while(!q2.empty()){
		cout << -q2.top() << ' ';
		q2.pop();
	}
	cout << '\n';
}

