# include <iostream>
using namespace std;

// ��̬
class Animal
{
    public:
    int m_A;
    // �麯��
    virtual void speak()
    {
        cout << " ��� " << endl;
    }
};

class Cat: public Animal
{
    public:
    void speak()
    {
        cout << " ����~ " << endl;
    }
};

class Dog: public Animal
{
    public:
    void speak()
    {
        cout << " ����~ " << endl;
    }
};

// ��ַ��󶨣��ڱ���׶ξ�ȷ���˺����ĵ�ַ
// �����ʵ�ֵ�ַ��󶨣���Ҫ�ö�̬��̬
// ��̬��̬��������
// 1. �м̳й�ϵ
// 2. ������д������麯��
void doSpeak(Animal &animal)
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

int main(int argc, char *argv[])
{
    test01();
}

