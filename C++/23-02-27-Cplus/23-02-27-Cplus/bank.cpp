#include<iostream>
#include<cstring>
#define NAME_LEN 20
using namespace std;


void ShowMenu(void); //메뉴출력
void MakeAccount(void); // 계좌개설을 위한 함수
void DespositMoney(void);   //입금
void WithdrawMoney(void); // 출금
void ShowAllaccinfo(void); // 잔액조회
 enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};
   //계좌개설,입금 , 출금 , 잔액, 나가기
 typedef struct
 {
	 int accID; //계좌번호
	 int balance; // 잔액
	 char cusName[NAME_LEN]; // 고객이름

 } Account;


 int main(void)
 {
	 int choice;

	 while (1)
	 {
		 ShowMenu();
		 cout << "선택: ";
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
	 cout << "1.계좌개설" << endl;
	 cout << "2.입   금" << endl;
	 cout << "3,출   금" << endl;
	 cout << "4.계좌정보 전체 출력" << endl;
	 cout << "5. 프로그램 종료" << endl;

 }

 void MakeAccount(void)
 {
	 int id;
	 char name[NAME_LEN];
	 int balance;

	 cout << "[계좌개설]" << endl;
	 cout << "계좌ID: ";  cin >> id;
	 cout << "이  름:"; cin >> name;
	 cout << "입금액: "; cin >> balance;
	 cout << endl;

	 accArr[accNUm].accID = id;
	 accArr[accNum].balance = balance;
	 strcpy_s(accArr[accNum].cusName, sizeof(accArr[accNum].cusName),name);


 }

 void DepositMoney(void)
 {
	 int money;
	 int id;
	 cout << "[입     금]" << endl;
	 cout << "계좌ID: ";   cin >> id;
	 cout << "입금액 : ";  cin >> money;


	 for (int i = 0; i < accNum; i++)
	 {
		 if (accArr[i].accID == id)
		 {
			 accArr[i].balance += money;
			 cout << "입금완료" << endl << endl;
			 return;

		 }



	 }
	 cout << "유효하지 않은 ID 입니다." << endl << endl;


 }


 void ShowAllAccinfo(void)
 {
	 int money;
	 int id;
	 cout << "[출     급]" << endl;
	 cout << "계좌ID:  ";  cin >> id;
	 cout << "출금액:  ";  cin >> money;

	 for (int i = 0; i < accNum; i++)
	 {
		



	 }

	 cout << "유효하지 않은 ID 입니다." << endl < endl;

 }

 void ShowAllAccinfo(void)
 {

	 for (int i = 0; i < accNum; i++)
	 {
		 cout << "계좌 ID : " << accArr[i].accID < endl;
		 cout << "이름 :     " << accArr[i].cusName << endl;
		 cout << "잔액:  " <<accArr[i].


	 }


 }

