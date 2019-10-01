#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	
	for(int i=1; i<=5; i++)
	{
		q.push(i);
	}
	
	for(int i=0; i<2; i++){
		cout << q.front() << ' ' << q.back() << '\n';
		q.pop();
	}
	
	cout << "Size = " << q.size() << '\n';
	cout << "empty = " << q.empty() << '\n';
}
