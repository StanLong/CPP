# set/multiset容器

## 1 set基本概念

**简介：**

- 所有元素都会在插入时自动被排序（从小到大）

**本质：**

- set/multiset属于关联式容器(特点是插入时自动被排序），底层结构是用**二叉树**实现。

**set和multiset区别**：

- set不允许容器中有重复的元素
- multiset允许容器中有重复的元素

## 2 set构造和赋值

功能描述：创建set容器以及赋值

构造：

- `set st;` //默认构造函数：
- `set(const set &st);` //拷贝构造函数

赋值：

- `set& operator=(const set &st);` //重载等号操作符

```cpp
#include<iostream>
using namespace std;
#include <string>
#include <set>

void printSet(set<int> &s1)
{
	for(set<int>::iterator it=s1.begin(); it!=s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(40);

	// 所有的元素在插入的时候自动按升序排序，且不允许的重复值
	printSet(s1); // 10 20 30 40

	set<int> s2(s1); // 拷贝构造
	printSet(s2);

	set<int> s3; 
	s3 = s2; // 赋值操作
	printSet(s3);
}

int main() {
	test01();
}
```

## 3 set大小和交换

**功能描述：**

- 统计set容器大小以及交换set容器

**函数原型：**

- `size();` //返回容器中元素的数目
- `empty();` //判断容器是否为空
- `swap(st);` //交换两个集合容器

set容器没有resize（）调整大小函数

## 4 set插入和删除

**函数原型：**

- `insert(elem);` //在容器中插入元素。
- `clear();` //清除所有元素
- `erase(pos);` //删除pos迭代器所指的元素，返回下一个元素的迭代器。
- `erase(beg, end);` //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
- `erase(elem);` //删除容器中值为elem的元素。

## 5 set查找和统计

**函数原型：**

- `find(key);` //查找key是否存在,若存在，**返回该键的元素的迭代器**；若不存在，返回set.end();**set.end()不能解引用**
- `count(key);` //**统计key的元素个数,这个元素个数要么为0，要么为1**

## 6 set和multiset的区别

**区别：**

- **set不可以插入重复数据，而multiset可以**
- **set插入数据的同时会返回插入结果，表示插入是否成功**
- **multiset不会检测数据，因此可以插入重复数据**

## 7 pair对组创建

**功能描述：**

- **成对出现的数据，利用对组可以返回两个数据**

使用对组时不需要包含头文件

**两种创建方式：**

- `pair p ( value1, value2 );`
- `pair p = make_pair( value1, value2 );`

## 8 set容器排序

学习目标：

- set容器默认排序规则为从小到大，掌握如何改变排序规则

主要技术点：

- 利用仿函数，可以改变排序规则