#include <iostream>
 
using namespace std;
 
// 主函数
int main(int argc, char *argv[])
{	
	int a = 10;

	// 1. 指针的定义
	// 指针定义的语法:  数据顾炎武 * 指针变量名
	int * p;

	//  &是取址符号， &a 表示取到变量a的内存地址
	p = &a;

	// printf(&a);
	// printf(p);
	cout << "a的地址为: " << &a << endl; // a的地址为: 0x61fe44


	// 2. 指针的使用
	// 指针前加 * 代表引用， 代表指针指向内存中的数据
	*p = 100;
	cout << "a=" << a << endl; // a=100
}