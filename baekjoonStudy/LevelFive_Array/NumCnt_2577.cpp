#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	int arr[10]={0};
	int result=0;
	cin >> A >> B >> C;
	
	result=A*B*C;
	while(result!=0){			//	result를 10씩 나눠서 한자리씩 구하는 아이디어 
		arr[result%10] += 1;	//	나머지연산을 통해서 배열에 몇번나왔는지 카운트해준다. 
		result/=10;				// 	한자리씩 구할때마다 10으로 나눠서 결과값을 줄인다. 
	}
	
	for(int i=0;i<10;i++){
		cout << arr[i] << endl;
	}
	
	return 0;
	
}
