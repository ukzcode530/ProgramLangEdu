//#include <stdio.h>
//
//typedef struct poin
//{
//	int xpos;
//	int ypos;
//
//} Point;
//
//void OrgSymTrans(Point* ptr)
//{
//	ptr->xpos = (ptr->xpos) * -1;
//	ptr->ypos = (ptr->ypos) * -1;
//
//}
//
//void ShowPosition(Point pos)
//{
//	printf("[%d, %d] \n", pos.xpos, pos.ypos);
//
//}
//
//
//int main()
//{
//	Point pos = { 7, -5 };
//	OrgSymTrans(&pos); // pos�� ���� ���� ��Ī�̵���Ų��.
//	ShowPosition(pos);
//	OrgSymTrans(&pos); // pos�� ���� ���� ��Ī�̵���Ų��.
//	ShowPosition(pos);
//
//	return 0;
//}