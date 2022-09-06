#include<stdio.h>
#include<math.h>
#include<stdlib.h>

 float abs_error(float x, float y)
 {
 	float Ea = x-y;
 	return Ea;
 	
 }
 
 float rel_error(float x,float y)
 {
 	float Rel_Er= (x-y)/x;
 	return Rel_Er;
 }
 float Rel_Error_per(float Er)
 {
 	Er=Er*100;
 	return Er;
 }
 float Round(float x)
 {
 	printf("ROUNDED VALUE OF x: %.4f",x);
 }
 float Trunc(float x)
 {
 	x=(int)(x*10000);
 	x=x/10000;
 	printf("\nTRUNCATED VALUE OF x: %.4f",x);
 }
 int main()
 {
 	float x,y;
 	printf("enter the value of x:\n");
 	scanf("%f",&x);
 	
 	printf("enter the value of y :\n");
 	scanf("%f",&y);
 	
 	float Ea = abs_error(x,y);
 	float Er = rel_error(x,y);
 	float Ep = Rel_Error_per(Er);
 	
 	printf("ABSOLUTE ERROR: %.4f \nRELATIVE ERROR : %.4f \nRELATIVE ERROR PERCENTAGE : %.4F\n",fabs(Ea),fabs(Er),fabs(Ep));
 	
 	Round(x);
 	Trunc(x);
 }
 	
 
