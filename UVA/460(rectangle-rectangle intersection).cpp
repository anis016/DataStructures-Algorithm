#include <stdio.h>
 
int MAX(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int MIN(int a, int b)
{
	if(a>b)
		return b;
	else
		return a;
}

int main()
{
	int ax, ay, bx, by, cx, cy, dx, dy, t;
	
	scanf("%d", &t);
	
	while (t-- > 0 && scanf("%d %d %d %d %d %d %d %d",&ax, &ay, &bx, &by, &cx, &cy, &dx, &dy) == 8) 
	{ 
		ax = MAX(ax, cx);
		bx = MIN(bx, dx);
		ay = MAX(ay, cy);
		by = MIN(by, dy);
		
		if (ax >= bx || ay >= by)
			printf("No Overlap\n");
		else			
			printf("%d %d %d %d\n", ax, ay, bx, by);
		
		if (t > 0)
			printf("\n");
	}
	return 0;
}
