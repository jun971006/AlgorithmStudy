#include <iostream> 
#include <algorithm>
#include <set>

using namespace std;
�� 
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
	
	pair<set<int>::iterator, bool> result = s.insert(0);		// int�� iterator�� bool�� pair�� ���� 
	cout << "result iterator = " << *result.first << '\n';		// result�� first���ڴ� 4 
	cout << "result bool = " << result.second << '\n';			// result�� second ���ڴ� bool������ 1 
	
	auto result2 = s.insert(3); 
	cout << "result2 iterator = " << *result2.first << '\n';		// result�� first���ڴ� 3
	cout << "result2 bool = " << result2.second << '\n';			// result�� second ���ڴ� bool������ 0
	
	s2.erase(s2.begin()); // 1, 2, 3, 4, 5 -> 2, 3, 4, 5
	cout << "s2.size() = " << s2.size() << '\n'; // 4
	
	auto it= s2.begin();	// it -> 2��ġ�� ����Ų��. 
	++it;		// ���ڸ� �ڷ� ��, 3��ġ ����Ų��. 
	cout << "*it = " <<*it << '\n';	// 3 ��� 
	it = s2.erase(it);				// 3�� ���� 
	cout << "*it = " << *it << '\n'; // it�� 4�� ����Ű�� �ֱ� ������ 4�� 
	cout << "s2.size() = " << s2.size() << '\n';
} 
