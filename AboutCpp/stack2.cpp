#include <iostream> 
#include <stack>

using namespace std;

int main()
{
	stack<pair<int, int>> s;
	s.push(make_pair(1, 2));
	s.push({3, 4});
	s.emplace(5, 6); // testStack.emplace(args)
  // �⺻ �ڷ����� �ƴ� Ư�� Ŭ������ Stack�̶�� �ش� args�� 
  // �� Ŭ������ �����ڷ� �Ѱ� �ش� Ŭ������ ��ü�� �����ؼ� Stack�� Push
	
	while(!s.empty()){
		auto p = s.top();
		cout << p.first << ' ' << p.second << '\n';
		s.pop();
	}
}
