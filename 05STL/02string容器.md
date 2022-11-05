# string容器

## 1.1 基本概念

**本质：**

string是C++风格的字符串，而string本质上是一个类

**string和char的区别：**

- char* 是一个指针。
- string是一个类，类内部封装了char*，管理这个字符串，是一个char*型的容器。

**特点：**

1. string类内部封装了很多成员方法，例如：查找find，拷贝copy，删除delete，替换replace，插入insert。

2. string管理char * 所分配的内存，不用担心复制越界和取值越界等，有类内部进行负责。

## 1.2 构造函数

构造函数原型

```cpp
string();//创建一个空的字符串，例如：string str;

string(const char* s);//使用字符串s初始化

string(const string& str);//使用一个string对象初始化另一个string对象

string(int n,char c);//使用n个字符c初始化
```

```cpp
#include<iostream>
using namespace std;
#include <vector>
#include <algorithm> // 标准算法头文件

// string 容器

void test01()
{
    string s1; // 默认构造
    
    const char * str = "hello world";
    string s2(str);

    cout << "s2=" << s2 << endl;

    string s3(s2);
    cout << "s3=" << s3 << endl;

    string s4(10, 'a');
    cout << "s4=" << s4 << endl;


}

int main()
{
    test01();
}
```

## 1.3 赋值操作

赋值函数的原型

```cpp
string& operator=(const char* s);//char*类型字符串赋值给当前的字符串
string& operator=(const char &s);//把字符串s赋给当前的字符串
string& operator=(const char s);//字符赋值给当前的字符串
string& assign(const char *s);//把字符串s赋给当前的字符串
string& assign(const char *s,int n);//把字符串s的前n个字符赋给当前的的字符串
string& assign(const string &s);//把字符串s赋给当前字符串
string& assign(int n,char c);//用n个字符c赋给当前字符串
```

