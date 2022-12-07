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
//����Ա��
void creatWorker(vector<Worker> & v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker w;
		w.m_Name = "Ա��";
		w.m_Name += nameSeed[i];
 
		w.m_salary = rand() % 10000 + 10000;//10000~19999
 
		v.push_back(w);
	}
}
//Ա������
void setGroup(vector<Worker> & v,multimap<int,Worker> & m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptId = rand() % 3;// 0 1 2
 
		//��Ա�����뵽������
		//key ���ű�� value����Ա��
		m.insert(make_pair(deptId, *it));
	}
}
//������ʾԱ��
void showWorkerByGourp(multimap<int,Worker> & m)
{
 
	//0: A B C
	//1 :D E F 
	//2: G ... 
	cout << "�߻�����:" << endl;
	multimap<int,Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
 
	for (;pos!=m.end() && index<count; pos++,index++)
	{
		cout << " ����: " << pos->second.m_Name << " ����: " << pos->second.m_salary << endl;
	}
 
	cout << "------------------------" << endl;
 
	cout << "��������:" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
 
	for (; pos != m.end() && index<count; pos++, index++)
	{
		cout << " ����: " << pos->second.m_Name << " ����: " << pos->second.m_salary << endl;
	}
 
	cout << "------------------------" << endl;
 
	cout << "�з�����:" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
 
	for (; pos != m.end() && index<count; pos++, index++)
	{
		cout << " ����: " << pos->second.m_Name << " ����: " << pos->second.m_salary << endl;
	}
}
int main()
{
 
	//�������
	srand((unsigned int)time(NULL));
 
	//1.����Ա��
	vector<Worker> vw;
	creatWorker(vw);
 
	//2.Ա������
	multimap<int, Worker> mw;
	setGroup(vw, mw);
 
	//3.������ʾԱ��
	showWorkerByGourp(mw);
 
	//����
	//for (vector<Worker>::iterator it = vw.begin(); it != vw.end(); it++)
	//{
	//	cout << " ����: " << it->m_Name << " ����: " << it->m_salary << endl;
	//}
 
	system("pause");
 
	return 0;
}