#include<stdio.h>
#include<math.h>

float f(float x, float y)
{
	return(y + x);
}

void main()
{
	float x0, y0, h, xn, x1, y1, y11;
	printf("Enter the initial values of x and y: ");
	scanf("%f %f", &x0, &y0);
	printf("Enter the step length: ");
	scanf("%f", &h);
	printf("Enter the value of x for which y is required: ");
	scanf("%f", &xn);
	printf("\n x \t\t y");

	while(x0<=xn)
	{
		printf("\n %f \t %f: \n", x0, y0);
		y11 = y0 + h*f(x0,y0);
		x1 = x0 + h;
		y1 = y0+h*(f(x0,y0) + f(x1,y11))/2.0;
		y0 = y1;
		x0 = x1;
	}
}
