#include <iostream>
#include <string>
using namespace std;
int main()
{
	int N;
	string str;
	int score[80]={0};
	cin >> N;
	int sum[N];
	int result;
	
	for(int i=0 ;i<N; i++){
		result=0;
		cin >> str;
		
		for(int j=0; j<str.size(); j++)
		{
			if(j==0 && str[j]=='O')
			{
				score[j] = 1;
			}
			else if(j==0 && str[j] == 'X')
			{
				score[j] = 0;
			}
			else{
				if(str[j]=='O' && str[j-1]=='O'){
					score[j] = score[j-1] + 1;
				}
				else if(str[j]=='O' && str[j-1]=='X'){
					score[j] = 1;
				}
				else{
					score[j] = 0;
				}
			}
			result+=score[j];
		}
		sum[i] = result;
		cout << sum[i] << endl;
	}
	return 0;
}

