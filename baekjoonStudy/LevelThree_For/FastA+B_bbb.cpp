#include <iostream>
using namespace std;
int main()
{
	// c++�� �˰��� ������ Ǯ�鼭 printf�� scanf�� ����ϸ� �� ��� ������� �ʾƵ� ������. 
	
	
	cin.tie(NULL);						
	// cin�� cout�� ������ Ǯ���ش�. (cout�� �ϱ����� cin���� �� ���Ŀ� cout�ѹ��� ���*********)
	// ���� untie���¿��� cout���ֱ� ���ؼ��� flush�� ������Ѵ�.   
	
	ios_base::sync_with_stdio(false);
	// cpp�� iostream�� c�� stdio�� ����ȭ�����ִ� ������ �Ѵ�.
	// �� ����ȭ�ϴ� �κ��� �����ִ� ����(�����̰� ���̻� �߻����� �ʴ´�.)
	// c++���� �������� ���� ����, c�� ���۵���� ������ �Ұ�
	// ����ϴ� ������ ���� �پ����� ������ �ӵ��� �����Ѵ�. 
	
	
	int T, A, B;
	cin >> T;
	
	for(int i=0;i<T;i++){
		cin >> A >> B;			// cin�� cout�� tie�� ������� ������ cin���� T��ŭ �Է��ް� 
		cout << A+B << '\n';	// cout���� �ѹ��� ������ش�. 
	}
	
	return 0;
	
}
