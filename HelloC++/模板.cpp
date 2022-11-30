#include<iostream>
using namespace std;
#include <list>
#include <algorithm> // 标准算法头文件

// list 容器
void printList(const list<int> &l1) // 
{
	for(list<int>::const_iterator it = l1.begin(); it != l1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

// 如果要降序排
bool myCompare(int v1, int v2)
{
	return v1>v2;
}

void test01()
{
	list<int> l1;
    l1.push_back(20); 
    l1.push_back(10);
    l1.push_back(30);
    l1.push_back(40);

	l1.reverse(); // 反转

	printList(l1);

	// 排序
	// sort(l1.begin(), l1.end()); // 所有不支持随机访问迭代器的容器，不可以用标准算法， 内部分提供对应的一些成员函数的算法
	l1.sort();
	printList(l1); //  10 20 30 40 , 默认升序
	l1.sort(myCompare); // 降序排，降序排的算法自己实现
	printList(l1);
}



int main()
{
    test01();
}