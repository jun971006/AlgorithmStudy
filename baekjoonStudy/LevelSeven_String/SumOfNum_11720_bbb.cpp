// 11720 ������ �� 
// N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int N;
	cin >> N;
	cin.ignore(); 			// N�� �Է¹޴� �������� ���๮��('\n')�� array[0]�� ���� �ȴ�.
							// ���۰� �����ֱ� ������ ������ ���� cin�� ������ ���ƴ�. 
							// cin.ignore()�� ���ؼ� ���ۿ� �ִ� ���๮�ڸ� �������ش�. 
							
	char arr[N] ={0};		
	int sum=0;
	
	for(int i=0; i<N; i++){
		cin.get(arr[i]);	// cin.get�Լ� ���� �Ѱ��� �Է¹ޱ� ���ؼ� ��� 
		sum+=atoi(&arr[i]);	// atoi�Լ�: cstdlib, stdlib.h����� �ִ� �Լ��̴�.
							// char�� int�� �ٲ��ִ� �Լ�. 
	}
	
	cout << sum << '\n';
	return 0;
	
}
