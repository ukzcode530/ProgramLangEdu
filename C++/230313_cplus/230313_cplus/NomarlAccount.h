#pragma once
#include "Account.h"

class NormalAccount : public Account
{
private:
    int interRate; // ������  
public:
    NormalAccount(int ID, int money, const char* name, int rate);
    virtual void Deposit(int money); //������ �Լ� �������̵�
};