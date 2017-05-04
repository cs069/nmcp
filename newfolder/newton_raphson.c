#include<stdio.h>
#include<math.h>

float fn(float x)
{
	return(x*x*x*x - x - 10);
}

float fd(float x)
{
	return(4*x*x*x - 1);
}


void main()
{
	float x0, x1, x2, e;
	printf("Enter the guess value: ");
	scanf("%f", &x0);
	printf("Enter the error limit: ");
	scanf("%f", &e);
	x1 = x0 - fn(x0)/fd(x0);

	while (fabs(x1 - x0)> e)
	{
		x0 = x1;
		x1 = x0 - fn(x0)/fd(x0);
	}

	printf("The root is: %f\n", x1);
}
