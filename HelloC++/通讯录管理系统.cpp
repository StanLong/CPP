# include <iostream>
using namespace std;

void fun(int& ref)
{
    ref = 100; // ref 是引用，转换为 * ref = 100
}

int main(int argc, char *argv[])
{
    int a = 10;

    int& ref = a; // 这行代码在内部自动转换为 int * const ref = &a; 指针常量是指针指向不可改，也说明了为什么引用不可改
    ref = 20; // 内部发现 ref 是引用， 自动帮我们转换为 * ref = 20;

    cout << "a=" << a << endl;
    cout << "ref=" << ref << endl;

    fun(a);
    cout << "a=" << a << endl;
    cout << "ref=" << ref << endl;

    return 0;

   
}
