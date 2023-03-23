#pragma once
typedef struct point
{
	int xpos;
	int ypos;
} Point;

void OrgSymTrans_b(Point* ptr)
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}