# include <iostream>
using namespace std;


int* func()
{
    // 利用new 关键字，可以将数据开辟到堆区

    int *p = new int (10);
    return p;
}

int main(int argc, char *argv[])
{

   int * p = func();

   cout << *p << endl;
}
