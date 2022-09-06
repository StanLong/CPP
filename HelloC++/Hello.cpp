#include <iostream>
# include <ctime> 
using namespace std;

// �ṹ������
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

// ������
int main(int argc, char *argv[])
{
	Hero heroArray[5] = 
	{
		{"����", 23, "��"},
		{"����", 22, "��"},
		{"�ŷ�", 20, "��"},
		{"����", 21, "��"},
		{"����", 19, "��"}
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	bubbleSort(heroArray, len);

	for(int i=0; i<len; i++)
	{
		cout << "����: " << heroArray[i].name << " ����: " << heroArray[i].age << " �Ա�: " << heroArray[i].sex << endl;
	}
}