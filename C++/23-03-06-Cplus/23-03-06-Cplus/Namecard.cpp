#include "NameCard.h"
#include <cstring>
#include <iostream>
#include "default.h"


#include "NameCard.h"
#include <cstring>
#include <iostream>

namespace COMP_POS
{
    void ShowPosition(int pos)
    {
        switch (pos)
        {
        case CLERK:
            cout << "사원" << endl;
            break;
        case SENIOR:
            cout << "주임" << endl;
            break;
        case ASSIST:
            cout << "대리" << endl;
            break;
        case MANAGER:
            cout << "과장" << endl;
            break;
        default:
            cout << "잘못된 직급" << endl;
            break;
        }
    }
}

NameCard::NameCard(const char* _name, const char* _company, const char* _Phone, int pos)
    : position(pos)
{
    int len = std::strlen(_name) + 1;
    name = new char[len];
    strcpy_s(name, len, _name);

    int len_c = std::strlen(_company) + 1;
    company = new char[len_c];
    strcpy_s(company, len_c, _company);

    int len_p = std::strlen(_Phone) + 1;
    phoneNum = new char[len_p];
    strcpy_s(phoneNum, len_p, _Phone);
}

NameCard::NameCard(const NameCard& copy) : position(copy.position)
{
    name = new char[strlen(copy.name) + 1];
    company = new char[strlen(copy.company) + 1];
    phoneNum = new char[strlen(copy.phoneNum) + 1];


}

void NameCard::ShowNameCardinf() const
{
    cout << "이름 : " << name << endl;
    cout << "회사 : " << company << endl;
    cout << "전화번호 : " << phoneNum << endl;
    cout << "직 급 : ";
    COMP_POS::ShowPosition(position);
}

NameCard::~NameCard()
{
    delete[] name;
    delete[] company;
    delete[] phoneNum;
}