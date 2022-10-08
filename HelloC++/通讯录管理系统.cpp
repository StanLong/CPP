# include <iostream>
using namespace std;


// 继承同名静态成员处理方式
class Base
{
    public:
    static int m_A;

    static void func()
    {
        cout << "父类成员函数" << endl;
    }

    static void func(int a)
    {
        cout << "父类成员函数" << endl;
    }
};

int Base::m_A = 100;

class Son :public Base
{
    public:
    static int m_A;
    static void func()
    {
        cout << "子类成员函数" << endl;
    }

};

int Son::m_A=200;

void test01()
{
    Son son; 
    // 通过对象访问
    cout << "访问子类同名成员，直接访问即可: " << son.m_A << endl;
    cout << "访问父类同名成员，需要加载作用域: " << son.Base::m_A << endl;


    // 通过类名访问
    cout << "访问子类同名成员，直接访问即可: " << Son::m_A << endl;
    // 第一个 :: 代表通过类名的方式访问，  第二个 :: 代表访问父类作用域下的m_A
    cout << "访问父类同名成员，需要加载作用域: " << Son::Base::m_A << endl;

    // 通过对象访问成员函数
    son.func();
    son.Base::func();

    // 通过类名访问成员函数
    Son::func();
    Son::Base::func();

    // 子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
    Son::Base::func(100);

    
}

int main(int argc, char *argv[])
{
    test01();
}

