#include <iostream>
using namespace std;
int main()
{
	// c++로 알고리즘 문제를 풀면서 printf나 scanf를 사용하면 이 방법 사용하지 않아도 괜찮다. 
	
	
	cin.tie(NULL);						
	// cin과 cout의 묶음을 풀어준다. (cout을 하기전에 cin부터 한 이후에 cout한번에 출력*********)
	// 만약 untie상태에서 cout해주기 위해서는 flush를 해줘야한다.   
	
	ios_base::sync_with_stdio(false);
	// cpp의 iostream과 c의 stdio를 동기화시켜주는 역할을 한다.
	// 이 동기화하는 부분을 끊어주는 역할(딜레이가 더이상 발생하지 않는다.)
	// c++만의 독립적인 버퍼 생성, c의 버퍼들과는 병행사용 불가
	// 사용하는 버퍼의 수가 줄어들었기 때문에 속도가 증가한다. 
	
	
	int T, A, B;
	cin >> T;
	
	for(int i=0;i<T;i++){
		cin >> A >> B;			// cin과 cout의 tie를 끊어줬기 때문에 cin으로 T만큼 입력읇받고 
		cout << A+B << '\n';	// cout으로 한번에 출력해준다. 
	}
	
	return 0;
	
}
