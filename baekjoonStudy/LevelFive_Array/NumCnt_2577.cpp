#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	int arr[10]={0};
	int result=0;
	cin >> A >> B >> C;
	
	result=A*B*C;
	while(result!=0){			//	result�� 10�� ������ ���ڸ��� ���ϴ� ���̵�� 
		arr[result%10] += 1;	//	������������ ���ؼ� �迭�� ������Դ��� ī��Ʈ���ش�. 
		result/=10;				// 	���ڸ��� ���Ҷ����� 10���� ������ ������� ���δ�. 
	}
	
	for(int i=0;i<10;i++){
		cout << arr[i] << endl;
	}
	
	return 0;
	
}
