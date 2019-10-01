#include <iostream>
#include <string>

using namespace std;

int main(){
	string s = "e";
	s.insert(0, "H");
	s.insert(2, "O");
	s.insert(2, 2, 'l').append(" ");		// insert인자 3개일때 (위치, 개수, 반복할문자) 
	
	string world = "Half the World Away";
	
	s.insert(6, world, 9, 5).push_back('!'); // "Hello World!"
				// insert인자 4개일 때 (위치, 넣을 문자열, 넣을 문자열의 시작 위치, 시작 위치부터의 개수) 
				// -> World가 들어온다. 9번째 자리부터 5개의 문자열 w, o, r, l, d 
	cout << s << '\n';
}
