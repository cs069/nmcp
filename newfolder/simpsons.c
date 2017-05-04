#include<stdio.h>
#include<math.h>
float f(float x)
{
	return (1/x);
}
void main()
{
	float sum=0,sum_even=0,sum_odd=0,h;
	float x0,xn,ans=0;
	printf("Enter the limits:");
	scanf("%f%f",&x0,&xn);
	int i,n;
	printf("Enter the number of ordinates:");
	scanf("%d",&n);
	h = (xn-x0)/n;
	sum = f(x0)+f(xn);
	for(i=1;i<=(n-1);i++)
	{
		if(i%2 == 0)
		{
			sum_even =  sum_even + f(x0+(i*h));
		}
		else
		{
			sum_odd = sum_odd + f(x0+(i*h));
		}
	}
	ans = h*(sum+(4*sum_odd)+(2*sum_even))/3;
	printf("%f\n",ans);
}
