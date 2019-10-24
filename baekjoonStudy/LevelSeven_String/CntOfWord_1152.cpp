// baekjoon 1152 : 단어의 개수
// 영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다. 
// 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 
// 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다 

#include <iostream>
#include <string>
using namespace std;
int main()
{	
	string str;
	int cnt=0;
	int wordNum=0;
	getline(cin, str);
	
	for(int i=0; i<str.size(); i++){
		if(str[i] == ' ')		// 공백의 개수를 세어준다. 
			cnt+=1;
	}
	
	wordNum=cnt+1;		// 단어의 개수는 공백의 수+1 
	
	if(str[0]==' ')		// 처음에 공백이 나오면 단어개수-1 
		wordNum-=1;
	if(str[str.size()-1]==' ')	// 마지막에 공백이 나오면 단어개수 -1 
		wordNum-=1;
		
	cout << wordNum << '\n';	// 단어개수 출력 
	return 0;
} 
