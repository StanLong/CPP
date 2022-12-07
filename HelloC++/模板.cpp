#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include<map>
using namespace std;
 
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
 
class Worker
{
public:
	string m_Name;
	int m_salary;
};
//创建员工
void creatWorker(vector<Worker> & v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker w;
		w.m_Name = "员工";
		w.m_Name += nameSeed[i];
 
		w.m_salary = rand() % 10000 + 10000;//10000~19999
 
		v.push_back(w);
	}
}
//员工分组
void setGroup(vector<Worker> & v,multimap<int,Worker> & m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//随机产生部门编号
		int deptId = rand() % 3;// 0 1 2
 
		//将员工插入到分组中
		//key 部门编号 value具体员工
		m.insert(make_pair(deptId, *it));
	}
}
//分组显示员工
void showWorkerByGourp(multimap<int,Worker> & m)
{
 
	//0: A B C
	//1 :D E F 
	//2: G ... 
	cout << "策划部门:" << endl;
	multimap<int,Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
 
	for (;pos!=m.end() && index<count; pos++,index++)
	{
		cout << " 姓名: " << pos->second.m_Name << " 工资: " << pos->second.m_salary << endl;
	}
 
	cout << "------------------------" << endl;
 
	cout << "美发部门:" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
 
	for (; pos != m.end() && index<count; pos++, index++)
	{
		cout << " 姓名: " << pos->second.m_Name << " 工资: " << pos->second.m_salary << endl;
	}
 
	cout << "------------------------" << endl;
 
	cout << "研发部门:" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
 
	for (; pos != m.end() && index<count; pos++, index++)
	{
		cout << " 姓名: " << pos->second.m_Name << " 工资: " << pos->second.m_salary << endl;
	}
}
int main()
{
 
	//随机种子
	srand((unsigned int)time(NULL));
 
	//1.创建员工
	vector<Worker> vw;
	creatWorker(vw);
 
	//2.员工分组
	multimap<int, Worker> mw;
	setGroup(vw, mw);
 
	//3.分组显示员工
	showWorkerByGourp(mw);
 
	//测试
	//for (vector<Worker>::iterator it = vw.begin(); it != vw.end(); it++)
	//{
	//	cout << " 姓名: " << it->m_Name << " 工资: " << it->m_salary << endl;
	//}
 
	system("pause");
 
	return 0;
}