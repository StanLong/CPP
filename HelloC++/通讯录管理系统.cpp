# include <iostream>
using namespace std;


int* func()
{
    // ����new �ؼ��֣����Խ����ݿ��ٵ�����

    int *p = new int (10);
    return p;
}

int main(int argc, char *argv[])
{

   int * p = func();

   cout << *p << endl;
}
