#include <iostream>
 
using namespace std;

// 1. �Զ���ѧ���ṹ������
struct Student
{
	string name;
	int age;
	int score;
} s3; // �ڶ���ṹ��ʱ˳�㴴���ṹ�����

// ������
int main(int argc, char *argv[])
{	
	// 2. ͨ��ѧ�����ʹ�������ѧ��
	// 2.1 ��ʽ1
	struct Student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "����: " << s1.name << " ����: " << s1.age << " ����: " << s1.score << endl;


	// 2.2 ��ʽ2
	// ��C++ �� �����ṹ�����ʱ struct �ؼ��ֿ���ʡ��
	Student s2 = {"����", 19, 90};
	cout << "����: " << s2.name << " ����: " << s2.age << " ����: " << s2.score << endl;

	// 2.3 ��ʽ3
	// �ڶ���ṹ��ʱ˳�㴴���ṹ������� ��������
	s3.name = "����";
	s3.age = 20;
	s3.score = 100;

	cout << "����: " << s3.name << " ����: " << s3.age << " ����: " << s3.score << endl;
}

