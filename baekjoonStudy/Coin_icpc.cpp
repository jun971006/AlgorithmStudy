#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n = 0;
	unsigned long long w = 0;
	int coins = 0;  // ���� �Է¿�
	bool flag = 0;	// 0�� ����, 1�� ����

	unsigned long long coinNa = 0;		// ���λ� �Ŀ� �������� ����
	unsigned long long coinCnt = 0;	// ���� � ����� ����

	cin >> n >> w;
	vector <int> coin;

	for (int i = 0; i < n; i++) {
		cin >> coins;
		coin.push_back(coins);
	}
	
	for (int i = 0; i < n; i++) {
		if (i == n-1) {
			if (flag == 1) 
				w = coinCnt * coin[i] + coinNa;
		
			break;
		}
		if (coin[i] > coin[i + 1]) {
			if (flag == 1) {
				flag = 0;
				// �Ÿ�
				w = coinCnt * coin[i] + coinNa;

			}
			else if (flag == 0)
				continue;
		}
		else if (coin[i] < coin[i + 1]) {
			if (flag == 0) {
				flag = 1;
				// �ŵ�
				coinCnt = w / coin[i];
				coinNa = w % coin[i];
				//cout << "coinCnt = " << coinCnt << " coinNa = " << coinNa << endl;
			}
			else if (flag == 1)
				continue;
		}
		
	}
	cout << w << endl;
}
