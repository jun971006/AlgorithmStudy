// 국어 점수는 내림차순
// 국어 점수 같을 때 영어 점수는 오름차순
// 국어 영어점수 같을 때 수학 점수 내림차순
// 모든 점수 같으면 ㄴ이름 사전 순으로 증가하는 순서(대문자 먼저 >> 소문자 나중에 

#include <iostream>	// 표준 입출력 
#include <string>	// string 이용 
#include <vector>	// vector 이용 
#include <algorithm> // sort 이용 
 
using namespace std;

struct Student{
	string name;
	int korean;
	int english;
	int math;
};

bool cmp(Student f, Student s){
	if(f.korean > s.korean){			// 국어 점수 감소하는 순서 
		return f.korean > s.korean;		 
	} else if(f.korean == s.korean){	// 국어 점수 같을 때 
		if(f.english < s.english){		// 영어 점수 증가하는 순서 
			return f.english < s.english;
		} else if(f.english == s.english){	// 국어, 영어 점수 같으면 
			if(f.math > s.math){			// 수학 점수 감소하는 순서 
				return f.math > s.math;
			} else if(f.math == s.math){	// 국어, 영어, 수학 점수 같을 때 
				if(f.name < s.name){		// 이름 사전순으로 증가하는 순서 
					return f.name < s.name;	// 리턴해준다. 
				}
			}
		}
	}
	return false;	// 모든 조건문에 걸리지 않았을 때 false값 리턴 
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
	
	return 0;
}
