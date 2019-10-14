#include <iostream>

using namespace std;

int main()
{
	int A=0, B=0, C=0;
	int max=0, mid=0;
	cin >> A >> B >> C;
	
	if(A>=B){
		if(B<C){
			if(A<C){
				cout << A << endl;
			}
			else{
				cout << C << endl;
			}
		}
		else{
			cout << B << endl;
		}
	}
	else{
		if(A<C){
			if(B<C){
				cout << B << endl;
			}
			else{
				cout << C << endl;
			}	
		}
		else{
			cout << A << endl;
		}
	} 
	
	return 0;
}
