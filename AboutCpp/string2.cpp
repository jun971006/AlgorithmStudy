#include <iostream>
#include <string>

using namespace std;

int main(){
	string s = "e";
	s.insert(0, "H");
	s.insert(2, "O");
	s.insert(2, 2, 'l').append(" ");		// insert���� 3���϶� (��ġ, ����, �ݺ��ҹ���) 
	
	string world = "Half the World Away";
	
	s.insert(6, world, 9, 5).push_back('!'); // "Hello World!"
				// insert���� 4���� �� (��ġ, ���� ���ڿ�, ���� ���ڿ��� ���� ��ġ, ���� ��ġ������ ����) 
				// -> World�� ���´�. 9��° �ڸ����� 5���� ���ڿ� w, o, r, l, d 
	cout << s << '\n';
}
