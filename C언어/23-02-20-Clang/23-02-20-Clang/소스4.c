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
//	OrgSymTrans(&pos); // pos의 값을 원점 대칭이동시킨다.
//	ShowPosition(pos);
//	OrgSymTrans(&pos); // pos의 값을 원점 대칭이동시킨다.
//	ShowPosition(pos);
//
//	return 0;
//}