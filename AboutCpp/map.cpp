#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	map<int, int> d1;
	map<int, int> d2;
	
	for(int i=1; i<=9; i+=2) {
		d1[i] = i*i;
		d2[i] = i*i;
	}
	for (int i=1; i<=10; i++) 
	{ 
		if (d1[i]) {
		 	cout << i << ' '; 
		}
	} cout << '\n';
	for (int i=1; i<=10; i++) 
	{
		if (d2.count(i)) 
		{ 
		cout << i << ' '; 
		} 	
	} 
	cout << '\n';
	cout << "d1.size() = " << d1.size() << '\n';
	cout << "d2.size() = " << d2.size() << '\n';
	
	
} 
