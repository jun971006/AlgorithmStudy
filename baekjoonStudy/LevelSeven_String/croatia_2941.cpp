// ����2941 : ũ�ξ�Ƽ�� ���ĺ� 
// ���� ���, ljes=njak�� ũ�ξ�Ƽ�� ���ĺ� 6��(lj, e, ?, nj, a, k)�� �̷���� �ִ�.
// �ܾ �־����� ��, �� ���� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ��� ����Ѵ�.



#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	
	int cnt=str.size();

	for(int i=0; i<str.size(); i++){
		if(str[i]=='-'){
			cnt-=1;
			
		}
		else if(str[i]=='='){
			if(str[i-1]=='z'){
				if(str[i-2]=='d'){
					cnt-=2;
					
					continue;
				}
				
				cnt-=1;
				continue;
			}
			cnt-=1;
			
		}
		else if(str[i]=='j'){
			if(str[i-1]=='l' || str[i-1]=='n'){
				cnt-=1;
				
			}
		}
	}
	
	cout << cnt << endl;
	return 0;
}
