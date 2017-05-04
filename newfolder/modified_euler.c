#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
	return(x+y);
}

void main()
{
	float x0,y0,x1,y1,xn,h,y11,y12,y13,e;
	printf("Enter the value of x and y:");
	scanf("%f%f",&x0,&y0);
	printf("Enter the step length :");
	scanf("%f",&h);
	printf("Enter the value of x for which y is required:");
	scanf("%f",&xn);
	printf("Enter error limit:");
	scanf("%f",&e);

	while(x0<=xn)
	{
		printf("\nwhen x=%f value of y=%f\n",x0,y0);
		y11=y0+h*f(x0,y0);
		x1=x0+h;
		y12=y0+h*(f(x0,y0)+f(x1,y11))/2.0;

		while(fabs(y11-y12)>e)
		{
			y13=y0+h*(f(x0,y0)+f(x1,y12))/2.0;
			y11=y12;
			y12=y13;
		}
	y0=y12;
	x0=x1;
	}
}
