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
        cout << "父类构造函数！" <<endl;
    }
    ~Base()
    {
        cout << "父类析构函数！" <<endl;
    }
};

class Son:public Base
{
    public:
    int m_D;

    public:
    Son()
    {
        cout << "子类构造函数！" <<endl;
    }
    ~Son()
    {
        cout << "子类析构函数！" <<endl;
    }
};


void test01()
{
    Son son; 
    // 父类构造函数！
    // 子类构造函数！
    // 子类析构函数！
    // 父类析构函数！

    // 根据系统输出可知
    // 继承中的构造的析构顺序如下
    // 先构造父类，再构造子类。先析构子类，再析构父类

}

int main(int argc, char *argv[])
{
    test01();
}

