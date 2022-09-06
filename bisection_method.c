#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int value_eqn(int x)
{
	int res = x*x*x-4*x-9;
	return res;
}
void main()
{
	int x;
	int h= -10;
	int l;
	while(value_eqn(h)<0)
	{
		l=h;
		h++;
	}
	printf("lower limit : %d\nupper limit : %d\n",l,h);
    printf("lower limit value : %d\n upper limit value : %d",value_eqn(l),value_eqn(h));
}

