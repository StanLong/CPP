# include <iostream>
using namespace std;

class Base
{
    public:
    int m_A;

    protected:
    int m_B;

    private:
    int m_C;

    public:
    Base()
    {
        cout << "���๹�캯����" <<endl;
    }
    ~Base()
    {
        cout << "��������������" <<endl;
    }
};

class Son:public Base
{
    public:
    int m_D;

    public:
    Son()
    {
        cout << "���๹�캯����" <<endl;
    }
    ~Son()
    {
        cout << "��������������" <<endl;
    }
};


void test01()
{
    Son son; 
    // ���๹�캯����
    // ���๹�캯����
    // ��������������
    // ��������������

    // ����ϵͳ�����֪
    // �̳��еĹ��������˳������
    // �ȹ��츸�࣬�ٹ������ࡣ���������࣬����������

}

int main(int argc, char *argv[])
{
    test01();
}

