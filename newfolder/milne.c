#include<stdio.h>
#include<math.h>
float f(float x, float y)
{
	return (x+y)/2;
}
void main()
{
	float x0,y0,h,xn,x1,y1,e;
	float x2,y2,x3,y3,x4;
        float y4,y41,y42;

	printf("Enter initial values: ");
	scanf("%f%f",&x0,&y0);
	scanf("%f%f",&x1,&y1);
        scanf("%f%f",&x2,&y2);
        scanf("%f%f",&x3,&y3);

	printf("Enter step length: ");
	scanf("%f",&h);
	printf("Enter value of x for which y is required: ");
	scanf("%f",&xn);
	printf("Enter error limit: ");
	scanf("%f",&e);
        printf("\n When x=%f\t y=%f",x0,y0);
        printf("\n When x=%f\t y=%f",x1,y1);
        printf("\n When x=%f\t y=%f",x2,y2);
        printf("\n When x=%f\t y=%f",x3,y3);

	while(x3<xn)
	{
		y4 = y0 + (4*h*(2*f(x1,y1) - f(x2,y2) + 2*f(x3,y3)))/3.0;
	        x4 = x3+h;
		y41 = y2 + h*(f(x2,y2)+4*f(x3,y3)+f(x4,y4))/3.0;
		while(fabs(y4-y41)>e)
		{
			y42 = y2 + h*(f(x2,y2)+4*f(x3,y3)+f(x4,y41))/3.0;
			y4 = y41;
			y41 = y42;
		}
		printf("\n When x=%f\t y=%f",x4,y4);
		y0=y1;
		y1=y2;
		y2=y3;
		y3=y4;
		x0=x1;
		x1=x2;
		x2=x3;
		x3=x4;
	}

}
