#pragma once
using namespace std;
#include<iostream>

// 职工抽象类
class Worker
{
    public:
    // 职工编号
    int m_id;
    // 职工姓名
    string m_name;
    // 部门编号
    int m_dept_id;

    // 显示个人信息
    virtual void showInfo()=0;
    // 部门编号
    virtual string getDeptName() = 0;
};