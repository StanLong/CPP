#include<iostream>
using namespace std;
#include <deque>
#include <algorithm> // 标准算法头文件

// deque 容器
void printDeque(const deque<int> &d) // 
{
	for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it = 100; 容器加了 const 关键字，不可更改
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	// 排序前
	printDeque(d1); // 300 200 100 10 20 30

	sort(d1.begin(), d1.end());
	// 排序后，默认升序
	printDeque(d1); // 10 20 30 100 200 300

	

}

int main()
{
    test01();
}