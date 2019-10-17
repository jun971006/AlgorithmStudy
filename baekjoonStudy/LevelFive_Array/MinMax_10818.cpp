#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N;
	int num;
	cin >> N;
	vector <int> vec; 			// vector는 크기 지정을 하지 않고 선언만한다. 
	
	for(int i=0;i<N;i++){
		cin >> num;
		vec.push_back(num);
	}
	
	int min=*min_element(vec.begin(),vec.end());
	int max=*max_element(vec.begin(),vec.end());
	
	cout << min << " " << max << endl;

	return 0;	
}
