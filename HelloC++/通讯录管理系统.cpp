# include <iostream>
using namespace std;

class Person
{
    // 构造函数
    public:
    Person()
    {
        cout << "构造函数被调用" << endl;
    }

    // 析构函数
    ~ Person()
    {
        cout << "析构函数被调用" << endl;
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

