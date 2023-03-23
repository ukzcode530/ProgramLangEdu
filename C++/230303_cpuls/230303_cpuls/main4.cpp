#include<cstring>
#include<iostream>

using namespace std;

const int NAME_LEN = 20;

void ShowMenu(void);       // �޴����
void MakeAccount(void);    // ���°����� ���� �Լ�
void DepositMoney(void);       // ��    ��
void WithdrawMoney(void);      // ��    ��
void ShowAllAccInfo(void);     // �ܾ���ȸ

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

class Account
{
private:
    int accID;      // ���¹�ȣ
    int balance;    // ��    ��
    char* cusName;   // ���̸�
public:

  Account(int id, int bc, char* name)
        :accID(id), balance(bc)
      {
          int len = strlen(name) + 1;
          cusName = new char[len];
          strcpy_s(cusName, len, name);
      }
    int GetID() { return accID; }
     void InMoney(int bc)
    {
         if (bc <= 0) return;
           balance += bc;
    }
      int OutMoney(int bc)
    {
         if (balance < bc) return 0;
          balance -= bc;
         return bc;
    }
    void ShowInfo()
    {
        cout << "�� ��: " << accID << endl;
        cout << "�� ��: " << cusName << endl;
        cout << "�� ��: " << balance << endl;
    }
    ~Account()
    {
        delete[] cusName;
    }
};

Account* accArr[100];   // Account ������ ���� �迭
int accNum = 0;        // ����� Account ��

int main(void)
{
    int choice;

    while (1)
    {
        ShowMenu();
        cout << "����: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case MAKE:
            MakeAccount();
            break;
        case DEPOSIT:
            DepositMoney();
            break;
        case WITHDRAW:
            WithdrawMoney();
            break;
        case INQUIRE:
            ShowAllAccInfo();
            break;
        case EXIT:
            return 0;
        default:
            cout << "Illegal selection.." << endl;
        }
    }
    return 0;
}

void ShowMenu(void)
{
    cout << "-----Menu------" << endl;
    cout << "1. ���°���" << endl;
    cout << "2. ��    ��" << endl;
    cout << "3. ��    ��" << endl;
    cout << "4. �������� ��ü ���" << endl;
    cout << "5. ���α׷� ����" << endl;
}

void MakeAccount(void)
{
    int id;
    char name[NAME_LEN];
    int balance;

    cout << "[���°���]" << endl;
    cout << "����ID: ";   cin >> id;
    cout << "��  ��: ";   cin >> name;
    cout << "�Աݾ�: ";   cin >> balance;
    cout << endl;

    accArr[accNum++] = new Account(id, balance, name);
}

void DepositMoney(void)
{
    int money;
    int id;
    cout << "[��    ��]" << endl;
    cout << "����ID: ";   cin >> id;
    cout << "�Աݾ�: ";   cin >> money;

    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i]->GetID() == id)
        {
            accArr[i]->InMoney(money);
            cout << "�ԱݿϷ�" << endl << endl;
            return;
        }
    }
    cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void WithdrawMoney(void)
{
    int money;
    int id;
    cout << "[��    ��]" << endl;
    cout << "����ID: ";   cin >> id;
    cout << "��ݾ�: ";   cin >> money;

    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i]->GetID() == id)
        {
            if (accArr[i]->OutMoney(money) == 0)
            {
                cout << "�ܾ׺���" << endl << endl;
                return;
            }

            cout << "��ݿϷ�" << endl << endl;
            return;
        }
    }
    cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void ShowAllAccInfo(void)
{
    for (int i = 0; i < accNum; i++)
    {
        accArr[i]->ShowInfo();
        cout << endl;
    }
}