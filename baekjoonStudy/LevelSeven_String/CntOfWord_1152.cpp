// baekjoon 1152 : �ܾ��� ����
// ���� ��ҹ��ڿ� ���⸸���� �̷���� ���ڿ��� �־�����. 
// �� ���ڿ����� �� ���� �ܾ ������? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
// ��, �� �ܾ ���� �� �����ϸ� ������ Ƚ����ŭ ��� ����� �Ѵ� 

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
		if(str[i] == ' ')		// ������ ������ �����ش�. 
			cnt+=1;
	}
	
	wordNum=cnt+1;		// �ܾ��� ������ ������ ��+1 
	
	if(str[0]==' ')		// ó���� ������ ������ �ܾ��-1 
		wordNum-=1;
	if(str[str.size()-1]==' ')	// �������� ������ ������ �ܾ�� -1 
		wordNum-=1;
		
	cout << wordNum << '\n';	// �ܾ�� ��� 
	return 0;
} 
