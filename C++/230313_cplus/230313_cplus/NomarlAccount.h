#pragma once
#include "Account.h"

class NormalAccount : public Account
{
private:
    int interRate; // 이자율  
public:
    NormalAccount(int ID, int money, const char* name, int rate);
    virtual void Deposit(int money); //다형성 함수 오버라이딩
};