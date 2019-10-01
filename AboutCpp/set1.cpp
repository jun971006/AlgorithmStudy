#include <iostream> 
#include <algorithm>
#include <set>

using namespace std;
력 
int main()
{
	set<int> s1;
	set<int> s2 = {1,2 ,3 ,4 ,5};
	set<int> s3 = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3};
	
	cout << "s1.size() = " << s1.size() << '\n';
	cout << "s2.size() = " << s2.size() << '\n';
	cout << "s3.size() = " << s3.size() << '\n';
	
	set<int> s;
	s.insert(1); s.insert(3); s.insert(2);
	
	pair<set<int>::iterator, bool> result = s.insert(0);		// int형 iterator와 bool을 pair로 묶음 
	cout << "result iterator = " << *result.first << '\n';		// result의 first인자는 4 
	cout << "result bool = " << result.second << '\n';			// result의 second 인자는 bool형식인 1 
	
	auto result2 = s.insert(3); 
	cout << "result2 iterator = " << *result2.first << '\n';		// result의 first인자는 3
	cout << "result2 bool = " << result2.second << '\n';			// result의 second 인자는 bool형식인 0
	
	s2.erase(s2.begin()); // 1, 2, 3, 4, 5 -> 2, 3, 4, 5
	cout << "s2.size() = " << s2.size() << '\n'; // 4
	
	auto it= s2.begin();	// it -> 2위치를 가리킨다. 
	++it;		// 한자리 뒤로 즉, 3위치 가리킨다. 
	cout << "*it = " <<*it << '\n';	// 3 출력 
	it = s2.erase(it);				// 3을 삭제 
	cout << "*it = " << *it << '\n'; // it는 4를 가리키고 있기 때문에 4출 
	cout << "s2.size() = " << s2.size() << '\n';
} 
