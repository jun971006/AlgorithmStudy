#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;

struct Student{
	string name;
	int korean;
	int english;
	int math;
};

bool cmp(Student &f, Student &s){
	if(f.korean > s.korean){
		return true;
	} else if(f.korean == s.korean){
		if(f.english < s.english){
			return true;
		} else if(f.english == s.english){
			if(f.math > s.math){
				return true;
			} else if(f.math == s.math){
				if(f.name < s.name){
					return true;
				}
			}
		}
	}
	return false;
}

int main(){
	int n;
	while(true){
		cin >> n;
		if((n >= 1) && (n <= 100000))
			break;
		
	}
	vector<Student> s(n);
	
	for(int i=0; i<n; i++)
		cin >> s[i].name >> s[i].korean >> s[i].english >> s[i].math;
		 
	// 정렬 함수 필요 
	sort(s.begin(), s.end(), cmp);
	for(int i=0; i<n; i++)
		cout << s[i].name << endl;
	// 국어 점수는 내림차순
	// 국어 점수 같을 때 영어 점수는 오름차순
	// 국어 영어점수 같을 때 수학 점수 내림차순
	// 모든 점수 같으면 ㄴ이름 사전 순으로 증가하는 순서(대문자 먼저 >> 소문자 나중에 
	return 0;
}
