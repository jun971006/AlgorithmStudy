#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Point {
		int x, y;
};

bool cmp(const Point &u, const Point &v) {
	if(u.x < v.x){
		return true;
	} else if(u.x == v.x) {
		return u.y < v.y;
 	} else {
 		return false;
	}
}	
int main(){
	
	
	
	int n;
	scanf("%d", &n);
	vector<pair<int, int>> a(n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &a[i].first, &a[i].second);
	}
	sort(a.begin(), a.end());
	for(int i=0; i<a.size(); i++){
		printf("%d %d\n", a[i].first, a[i].second);
	}
}
