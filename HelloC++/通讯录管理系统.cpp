# include <iostream>
using namespace std;

void fun(int& ref)
{
    ref = 100; // ref �����ã�ת��Ϊ * ref = 100
}

int main(int argc, char *argv[])
{
    int a = 10;

    int& ref = a; // ���д������ڲ��Զ�ת��Ϊ int * const ref = &a; ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵����Ϊʲô���ò��ɸ�
    ref = 20; // �ڲ����� ref �����ã� �Զ�������ת��Ϊ * ref = 20;

    cout << "a=" << a << endl;
    cout << "ref=" << ref << endl;

    fun(a);
    cout << "a=" << a << endl;
    cout << "ref=" << ref << endl;

    return 0;

   
}
