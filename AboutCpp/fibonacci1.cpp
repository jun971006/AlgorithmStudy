#include <iostream>

using namespace std;

int fibonacci(int x){
	int memo[100] = {0};
	
	if(x<=1){
		return x;
	}
	else{
		if(memo[x] > 0){
			return memo[x];
		}
		else{
			memo[x] = fibonacci(x-1) + fibonacci(x-2);
			return memo[x];
		}
	}
}

int main(){
	cout << fibonacci(5) << '\n'; 
	
} 
