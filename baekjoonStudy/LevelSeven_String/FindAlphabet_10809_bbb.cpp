// 10809 알파벳 찾기 
// 알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서
// 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 
// 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.

#include <iostream>
#define N 101
#define AP 26
using namespace std;
int main()
{
	char S[N]={0};
	int A[AP];
	fill_n(A, AP, -1);	// c++에서 배열을 초기화할때 모든 원소의 값을 -1로 채울 때 
						// std::fill_n(array, size, value); 을 통해 배열 전체 초기화 가능 

	for(int i=0; i<N; i++){
		cin.get(S[i]);			// 한 문자씩 읽어온다. 
		if(S[i]=='\n')
			break;
		if(!(A[int(S[i])-97]==-1))		// 처음 등장하는 위치를 기억해야 함 
			continue;					// 이미 위치가 저장되어 있다면 continue로 다음 문자 입력 
		else
			A[int(S[i])-97] = i; 
	}
	
	for(int i=0; i<AP; i++){
		cout << A[i] << " ";
	}
	return 0;
	
}
