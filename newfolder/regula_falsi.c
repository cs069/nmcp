#include<stdio.h>
#include<math.h>

float fn(float x)
{
	return(x*x*x - 2*x - 5);
}

void main()
{
	float x1, x2, x3, f1, f2, f3, e;
	printf("Enter the guess value: ");
	scanf("%f %f", &x1, &x2);
	printf("Enter the error limit: ");
	scanf("%f", &e);

	f1 = fn(x1); 
	f2 = fn(x2);
	x3 = (x1*f2 - x2*f1)/(f2 - f1);
	f3 = fn(x3);

	while (fabs(fabs(x2 - x1) > e))
	{
		if (f1*f3<0)
		{
			x2 = x3;
		}
		else
		{
			x1 = x3;
		}

		f1 = fn(x1); 
		f2 = fn(x2);
		x3 = (x1*f2 - x2*f1)/(f2 - f1);
		f3 = fn(x3);
	}

	printf("The root is: %f\n", x3);
}
