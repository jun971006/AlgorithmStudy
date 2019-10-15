#include <iostream>
using namespace std;
int main()
{
	int N, New=0;
	int Ten=0, One=0, cnt=0;
	cin >> N;
	New=N;
	
	while(true){
		Ten=New/10;
		One=New%10;
		New=One*10+(One+Ten)%10;
		cnt+=1;
		
		if(N==New)
			break;
	}
	cout << cnt;
	
	return 0;
}
