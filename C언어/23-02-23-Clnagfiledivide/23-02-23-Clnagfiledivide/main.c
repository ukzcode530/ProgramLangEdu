#include <stdio.h>
#include "Point_2.h"


int main(void)
{
	Point pos = { 7, -5 };
	OrgSymTrans_b(&pos);
	ShowPosition_b(pos);
	OrgSymTrans_b(&pos);
	ShowPosition_b(pos);
	return 0;
}
