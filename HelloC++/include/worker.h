#pragma once
using namespace std;
#include<iostream>

// ְ��������
class Worker
{
    public:
    // ְ�����
    int m_id;
    // ְ������
    string m_name;
    // ���ű��
    int m_dept_id;

    // ��ʾ������Ϣ
    virtual void showInfo()=0;
    // ���ű��
    virtual string getDeptName() = 0;
};