#include <iostream>
 
using namespace std;

// 1. 自定义学生结构体类型
struct Student
{
	string name;
	int age;
	int score;
} s3; // 在定义结构体时顺便创建结构体变量

// 主函数
int main(int argc, char *argv[])
{	
	// 2. 通过学生类型创建具体学生
	// 2.1 方式1
	struct Student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名: " << s1.name << " 年龄: " << s1.age << " 分数: " << s1.score << endl;


	// 2.2 方式2
	// 在C++ 中 创建结构体变量时 struct 关键字可以省略
	Student s2 = {"李四", 19, 90};
	cout << "姓名: " << s2.name << " 年龄: " << s2.age << " 分数: " << s2.score << endl;

	// 2.3 方式3
	// 在定义结构体时顺便创建结构体变量， 不建议用
	s3.name = "王五";
	s3.age = 20;
	s3.score = 100;

	cout << "姓名: " << s3.name << " 年龄: " << s3.age << " 分数: " << s3.score << endl;
}

