#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	string num1, num2;
	cin >> num1 >> num2;
	
	char temp;
	temp=num1[0];
	num1[0]=num1[2];
	num1[2]=temp;
	
	temp=num2[0];
	num2[0]=num2[2];
	num2[2]=temp;
	
	int n1 = stoi(num1);
	int n2 = stoi(num2);
	
	if(n1 > n2)
		cout << n1;
	else
		cout << n2;
	
	return 0;
} 
