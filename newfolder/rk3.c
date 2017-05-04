#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	return(x+y);
}
void main()
{
	float x0,y0,h,xn,k1,k2,k3;
	printf("Enter initial values of x and y:");
	scanf("%f %f",&x0,&y0);
	printf("Enter step length:");
	scanf("%f",&h);
	printf("Enter the value of x for which y is required:");
	scanf("%f",&xn);

	while(x0<=xn)
	
	{
		printf("Value of x = %f Value of y = %f\n",x0,y0);
		k1 = h*f(x0,y0);
		k2 = h*f(x0+(h/2),y0+(k1/2));
		k3 = h*f(x0+h,y0+(h*f(x0+h,y0+k1)));
		y0 = y0+((k1+(4*k2)+k3)/6);
		x0 = x0+h;
		
	}
}
