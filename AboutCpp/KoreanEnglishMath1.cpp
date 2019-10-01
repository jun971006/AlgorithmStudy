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
		 
	// ���� �Լ� �ʿ� 
	sort(s.begin(), s.end(), cmp);
	for(int i=0; i<n; i++)
		cout << s[i].name << endl;
	// ���� ������ ��������
	// ���� ���� ���� �� ���� ������ ��������
	// ���� �������� ���� �� ���� ���� ��������
	// ��� ���� ������ ���̸� ���� ������ �����ϴ� ����(�빮�� ���� >> �ҹ��� ���߿� 
	return 0;
}
