# include <iostream>
using namespace std;

class Person
{
    // ���캯��
    public:
    Person()
    {
        cout << "���캯��������" << endl;
    }

    // ��������
    ~ Person()
    {
        cout << "��������������" << endl;
    }
};

void test()
{
    Person p;
}
int main(int argc, char *argv[])
{
    test();
}

