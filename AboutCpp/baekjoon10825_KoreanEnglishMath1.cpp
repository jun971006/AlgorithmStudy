// ���� ������ ��������
// ���� ���� ���� �� ���� ������ ��������
// ���� �������� ���� �� ���� ���� ��������
// ��� ���� ������ ���̸� ���� ������ �����ϴ� ����(�빮�� ���� >> �ҹ��� ���߿� 

#include <iostream>	// ǥ�� ����� 
#include <string>	// string �̿� 
#include <vector>	// vector �̿� 
#include <algorithm> // sort �̿� 
 
using namespace std;

struct Student{
	string name;
	int korean;
	int english;
	int math;
};

bool cmp(Student f, Student s){
	if(f.korean > s.korean){			// ���� ���� �����ϴ� ���� 
		return f.korean > s.korean;		 
	} else if(f.korean == s.korean){	// ���� ���� ���� �� 
		if(f.english < s.english){		// ���� ���� �����ϴ� ���� 
			return f.english < s.english;
		} else if(f.english == s.english){	// ����, ���� ���� ������ 
			if(f.math > s.math){			// ���� ���� �����ϴ� ���� 
				return f.math > s.math;
			} else if(f.math == s.math){	// ����, ����, ���� ���� ���� �� 
				if(f.name < s.name){		// �̸� ���������� �����ϴ� ���� 
					return f.name < s.name;	// �������ش�. 
				}
			}
		}
	}
	return false;	// ��� ���ǹ��� �ɸ��� �ʾ��� �� false�� ���� 
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
	
	return 0;
}
