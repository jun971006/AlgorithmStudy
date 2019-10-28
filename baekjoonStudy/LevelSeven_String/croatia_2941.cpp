// 백준2941 : 크로아티아 알파벳 
// 예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, ?, nj, a, k)로 이루어져 있다.
// 단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.



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
