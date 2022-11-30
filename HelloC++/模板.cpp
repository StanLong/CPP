#include<iostream>
using namespace std;
#include <list>
#include <algorithm> // ��׼�㷨ͷ�ļ�

// list ����
void printList(const list<int> &l1) // 
{
	for(list<int>::const_iterator it = l1.begin(); it != l1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

// ���Ҫ������
bool myCompare(int v1, int v2)
{
	return v1>v2;
}

void test01()
{
	list<int> l1;
    l1.push_back(20); 
    l1.push_back(10);
    l1.push_back(30);
    l1.push_back(40);

	l1.reverse(); // ��ת

	printList(l1);

	// ����
	// sort(l1.begin(), l1.end()); // ���в�֧��������ʵ��������������������ñ�׼�㷨�� �ڲ����ṩ��Ӧ��һЩ��Ա�������㷨
	l1.sort();
	printList(l1); //  10 20 30 40 , Ĭ������
	l1.sort(myCompare); // �����ţ������ŵ��㷨�Լ�ʵ��
	printList(l1);
}



int main()
{
    test01();
}