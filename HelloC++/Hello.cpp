#include <iostream>
# include <ctime> 
using namespace std;

// 结构体数组
struct Hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(Hero heroArray[], int len)
{
	for(int i=0; i<len; i++)
	{
		for(int j=i; j<len; j++)
		{
			if(heroArray[i].age > heroArray[j].age)
			{
				Hero temp = heroArray[j];
				temp = heroArray[i];
				heroArray[i] = heroArray[j];
				heroArray[j] = temp;
			}
		}
	}
}

// 主函数
int main(int argc, char *argv[])
{
	Hero heroArray[5] = 
	{
		{"刘备", 23, "男"},
		{"关羽", 22, "男"},
		{"张飞", 20, "男"},
		{"赵云", 21, "男"},
		{"貂蝉", 19, "男"}
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	bubbleSort(heroArray, len);

	for(int i=0; i<len; i++)
	{
		cout << "姓名: " << heroArray[i].name << " 年龄: " << heroArray[i].age << " 性别: " << heroArray[i].sex << endl;
	}
}