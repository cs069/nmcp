#include<stdio.h>
#include<math.h>
float fun(float x)
{
	return ((x*x*x)-2*x-5);
}
void main()
{
	float x1,x2,x3,f1,f2,f3,e;
	printf("Enter the guess values: ");
	scanf("%f%f",&x1,&x2);
	printf("Enter the error limit: ");
	scanf("%f",&e);
	f1 = fun(x1);
	f2 = fun(x2);
	x3 = ((x1 * f2) - (x2 * f1))/(f2 - f1);
	f3 = fun(x3);

	while(fabs(x2 - x1) > e)
	{

		x1 = x2;
		x2 = x3;
		f1 = fun(x1);
		f2 = fun(x2);
		x3 = ((x1*f2) - (x2*f1))/(f2 - f1);
		f3 = fun(x3);
	}
	printf("The root is: %f\n",x3);
}
