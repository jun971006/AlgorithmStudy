// 10809 ���ĺ� ã�� 
// ���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. ������ ���ĺ��� ���ؼ�
// �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��, 
// ���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>
#define N 101
#define AP 26
using namespace std;
int main()
{
	char S[N]={0};
	int A[AP];
	fill_n(A, AP, -1);	// c++���� �迭�� �ʱ�ȭ�Ҷ� ��� ������ ���� -1�� ä�� �� 
						// std::fill_n(array, size, value); �� ���� �迭 ��ü �ʱ�ȭ ���� 

	for(int i=0; i<N; i++){
		cin.get(S[i]);			// �� ���ھ� �о�´�. 
		if(S[i]=='\n')
			break;
		if(!(A[int(S[i])-97]==-1))		// ó�� �����ϴ� ��ġ�� ����ؾ� �� 
			continue;					// �̹� ��ġ�� ����Ǿ� �ִٸ� continue�� ���� ���� �Է� 
		else
			A[int(S[i])-97] = i; 
	}
	
	for(int i=0; i<AP; i++){
		cout << A[i] << " ";
	}
	return 0;
	
}
