#pragma once
#include <iostream>
using namespace std;
#include "D:\StanLong\git_repository\C\HelloC++\include\worker.h"

// Ա����
class Employee : public Worker
{
    public:
    Employee(int id, string name, int dId);
    virtual void showInfo();
    virtual string getDeptName();
};
