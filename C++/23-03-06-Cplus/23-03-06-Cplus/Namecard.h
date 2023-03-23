#pragma once

namespace COMP_POS
{
    enum Position { CLERK, SENIOR, ASSIST, MANAGER };
    void ShowPosition(int pos);
}

class NameCard
{
private:
    char* name;
    char* company;
    char* phoneNum;
    int position;
public:


    NameCard(const char* _name, const char* _company, const char* _Phone, int pos);
    Namecard(const NameCard& copy);

    void ShowNameCardinf() const;
    ~NameCard();
};
