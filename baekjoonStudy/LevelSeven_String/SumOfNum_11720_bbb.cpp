// 11720 숫자의 합 
// N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오

#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int N;
	cin >> N;
	cin.ignore(); 			// N을 입력받는 과정에서 개행문자('\n')가 array[0]에 들어가게 된다.
							// 버퍼가 남아있기 때문에 다음에 오는 cin에 영향을 끼쳤다. 
							// cin.ignore()을 통해서 버퍼에 있는 개행문자를 삭제해준다. 
							
	char arr[N] ={0};		
	int sum=0;
	
	for(int i=0; i<N; i++){
		cin.get(arr[i]);	// cin.get함수 문자 한개씩 입력받기 위해서 사용 
		sum+=atoi(&arr[i]);	// atoi함수: cstdlib, stdlib.h헤더에 있는 함수이다.
							// char를 int로 바꿔주는 함수. 
	}
	
	cout << sum << '\n';
	return 0;
	
}
