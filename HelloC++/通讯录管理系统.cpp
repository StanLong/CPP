# include <iostream>
#define MAX 1000 // ����곣��MAX��ʾͨѶ¼�������
using namespace std;


// ��ʾ�˵�
void showMenu()
{
    
    cout << "*************************" <<endl;
    cout << "***** 1�������ϵ�� *****" <<endl;
    cout << "***** 2����ʾ��ϵ�� *****" <<endl;
    cout << "***** 3��ɾ����ϵ�� *****" <<endl;
    cout << "***** 4��������ϵ�� *****" <<endl;
    cout << "***** 5���޸���ϵ�� *****" <<endl;
    cout << "***** 6�������ϵ�� *****" <<endl;
    cout << "***** 0���˳�ͨѶ¼ *****" <<endl;
    cout << "*************************" <<endl;

}

// ��ϵ�˽ṹ��
struct Person
{
    string m_name;
    int m_sex;
    int m_age;
    string m_phone;
    string m_addr;
};


// ͨѶ¼�ṹ��
struct AddressBooks
{
    Person personArray[MAX];
    int m_size;
};





int main()
{
    int select = 0;
    while(true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1 : // �����ϵ��
            break;
        case 2 : // ��ʾ��ϵ��
            break;
        case 3 : // ɾ����ϵ��
            break;
        case 4 : // ������ϵ��
            break;
        case 5 : // �޸���ϵ��
            break;
        case 6 : // �����ϵ��
            break;
        case 0 : // �˳�ͨѶ¼
            cout << "��ӭ�´ε�¼" << endl;
            system("pause");
            return 0;
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}