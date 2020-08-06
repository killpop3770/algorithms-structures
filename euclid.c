#include <stdio.h>

int euclid(int x, int y)
{
	while(x != 0 && y != 0)
	{
		if(x > y) x = x%y;
		else y = y%x;
	}

	if(x!=0) printf("%d\n", x);
	if(y!=0) printf("%d\n", y);
	return 0;
}

int main()
{
	int x = 1680, y = 640;
	euclid(x, y);
}