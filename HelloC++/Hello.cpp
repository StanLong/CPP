#include <iostream>
 
using namespace std;
 
// ������
int main(int argc, char *argv[])
{	
	int a = 10;

	// 1. ָ��Ķ���
	// ָ�붨����﷨:  ���ݹ����� * ָ�������
	int * p;

	//  &��ȡַ���ţ� &a ��ʾȡ������a���ڴ��ַ
	p = &a;

	// printf(&a);
	// printf(p);
	cout << "a�ĵ�ַΪ: " << &a << endl; // a�ĵ�ַΪ: 0x61fe44


	// 2. ָ���ʹ��
	// ָ��ǰ�� * �������ã� ����ָ��ָ���ڴ��е�����
	*p = 100;
	cout << "a=" << a << endl; // a=100
}