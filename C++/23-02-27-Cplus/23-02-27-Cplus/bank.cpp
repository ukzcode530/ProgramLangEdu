#include<iostream>
#include<cstring>
#define NAME_LEN 20
using namespace std;


void ShowMenu(void); //�޴����
void MakeAccount(void); // ���°����� ���� �Լ�
void DespositMoney(void);   //�Ա�
void WithdrawMoney(void); // ���
void ShowAllaccinfo(void); // �ܾ���ȸ
 enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};
   //���°���,�Ա� , ��� , �ܾ�, ������
 typedef struct
 {
	 int accID; //���¹�ȣ
	 int balance; // �ܾ�
	 char cusName[NAME_LEN]; // ���̸�

 } Account;


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
			case DEPOSIT :
			   DespositMoney();
			   break;
			case WITHDRAW:
			   break;
		  case INQUIRE :
			  ShowAllaccinfo();
			   break;
		  case EXIT :
			  return 0;
		  default :
			  cout << "illega selection.." << endl;

		 }

		 return 0;
	 }



}


 void ShowMenu(void)
 {
	 cout << "-----Menu-----" << endl;
	 cout << "1.���°���" << endl;
	 cout << "2.��   ��" << endl;
	 cout << "3,��   ��" << endl;
	 cout << "4.�������� ��ü ���" << endl;
	 cout << "5. ���α׷� ����" << endl;

 }

 void MakeAccount(void)
 {
	 int id;
	 char name[NAME_LEN];
	 int balance;

	 cout << "[���°���]" << endl;
	 cout << "����ID: ";  cin >> id;
	 cout << "��  ��:"; cin >> name;
	 cout << "�Աݾ�: "; cin >> balance;
	 cout << endl;

	 accArr[accNUm].accID = id;
	 accArr[accNum].balance = balance;
	 strcpy_s(accArr[accNum].cusName, sizeof(accArr[accNum].cusName),name);


 }

 void DepositMoney(void)
 {
	 int money;
	 int id;
	 cout << "[��     ��]" << endl;
	 cout << "����ID: ";   cin >> id;
	 cout << "�Աݾ� : ";  cin >> money;


	 for (int i = 0; i < accNum; i++)
	 {
		 if (accArr[i].accID == id)
		 {
			 accArr[i].balance += money;
			 cout << "�ԱݿϷ�" << endl << endl;
			 return;

		 }



	 }
	 cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;


 }


 void ShowAllAccinfo(void)
 {
	 int money;
	 int id;
	 cout << "[��     ��]" << endl;
	 cout << "����ID:  ";  cin >> id;
	 cout << "��ݾ�:  ";  cin >> money;

	 for (int i = 0; i < accNum; i++)
	 {
		



	 }

	 cout << "��ȿ���� ���� ID �Դϴ�." << endl < endl;

 }

 void ShowAllAccinfo(void)
 {

	 for (int i = 0; i < accNum; i++)
	 {
		 cout << "���� ID : " << accArr[i].accID < endl;
		 cout << "�̸� :     " << accArr[i].cusName << endl;
		 cout << "�ܾ�:  " <<accArr[i].


	 }


 }

