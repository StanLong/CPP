# include <iostream>
using namespace std;

// 多态
class Animal
{
    public:
    int m_A;
    // 虚函数
    virtual void speak()
    {
        cout << " 会叫 " << endl;
    }
};

class Cat: public Animal
{
    public:
    void speak()
    {
        cout << " 喵喵~ " << endl;
    }
};

class Dog: public Animal
{
    public:
    void speak()
    {
        cout << " 汪汪~ " << endl;
    }
};

// 地址早绑定，在编译阶段就确定了函数的地址
// 如果想实现地址晚绑定，就要用动态多态
// 动态多态满足条件
// 1. 有继承关系
// 2. 子类重写父类的虚函数
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

