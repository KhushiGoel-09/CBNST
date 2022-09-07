#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double value_eqn(double x)
{
	double res = x*x*x-4*x-9;
	return res;
}
double Trunc_n(double x, int n)
{
	int mult = pow(10,n);
	x = (int)(x*mult);
	x=x/mult;
	return x;
	
}
double bisection(double x_0,double x_1)
{
	double x_2=0.0;
	while((x_1-x_0)>0.0009)
	{
	     printf("\n%.4f & %.4f", x_0,x_1);
           x_2 = (x_1 + x_0)/2;
		printf("\n%.4f",x_2);
		
		double y_2 = value_eqn(x_2);
		double y_1 = value_eqn(x_1);
		double y_0 = value_eqn(x_0);
		  if(y_0*y_2 < 0)
                x_1 = x_2; 
            else
                x_0 = x_2;
       }
    return x_1;
}
void main()
{
    double h = -10;
    double l;
    while(value_eqn(h) < 0)
    {
        l = h;
        h++;
    }
    printf("Lower Limit : %.4f\nUpper Limit : %.4f\n", l,h);
    printf("LOWER LIMIT VALUE : %.4f\n UPPER LIMIT VALUE : %.4f",value_eqn(l),value_eqn(h));


    double res = bisection(l, h);
    printf("\nBisection Method : %.3f", Trunc_n(res, 3));
}
		
	
