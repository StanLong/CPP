# include <iostream>
using namespace std;


// �̳�ͬ����̬��Ա����ʽ
class Base
{
    public:
    static int m_A;

    static void func()
    {
        cout << "�����Ա����" << endl;
    }

    static void func(int a)
    {
        cout << "�����Ա����" << endl;
    }
};

int Base::m_A = 100;

class Son :public Base
{
    public:
    static int m_A;
    static void func()
    {
        cout << "�����Ա����" << endl;
    }

};

int Son::m_A=200;

void test01()
{
    Son son; 
    // ͨ���������
    cout << "��������ͬ����Ա��ֱ�ӷ��ʼ���: " << son.m_A << endl;
    cout << "���ʸ���ͬ����Ա����Ҫ����������: " << son.Base::m_A << endl;


    // ͨ����������
    cout << "��������ͬ����Ա��ֱ�ӷ��ʼ���: " << Son::m_A << endl;
    // ��һ�� :: ����ͨ�������ķ�ʽ���ʣ�  �ڶ��� :: ������ʸ����������µ�m_A
    cout << "���ʸ���ͬ����Ա����Ҫ����������: " << Son::Base::m_A << endl;

    // ͨ��������ʳ�Ա����
    son.func();
    son.Base::func();

    // ͨ���������ʳ�Ա����
    Son::func();
    Son::Base::func();

    // ������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����Ա����
    Son::Base::func(100);

    
}

int main(int argc, char *argv[])
{
    test01();
}

