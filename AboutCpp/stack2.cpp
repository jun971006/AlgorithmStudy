#include <iostream> 
#include <stack>

using namespace std;

int main()
{
	stack<pair<int, int>> s;
	s.push(make_pair(1, 2));
	s.push({3, 4});
	s.emplace(5, 6); // testStack.emplace(args)
  // 기본 자료형이 아닌 특정 클래스의 Stack이라면 해당 args를 
  // 그 클래스의 생성자로 넘겨 해당 클래스의 객체를 생성해서 Stack에 Push
	
	while(!s.empty()){
		auto p = s.top();
		cout << p.first << ' ' << p.second << '\n';
		s.pop();
	}
}
