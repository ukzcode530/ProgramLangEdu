#include "NameCard.h"

int main()
{
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manClerk2 = manClerk;  // ���� ���� : ����Ʈ ���� �����ڿ��� �ñ��� �̰� deppī�Ƿκ���
    manClerk2.ShowNameCardinf();
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodcomp", "010-5555-6666", COMP_POS::ASSIST);

    manClerk.ShowNameCardinf();
    manSENIOR.ShowNameCardinf();
    manAssist.ShowNameCardinf();

    return 0;
}