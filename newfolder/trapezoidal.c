#include<stdio.h>
#include<math.h>
float f(float x)
{
	return (1/(1+x*x));
}
void main()
{
	float sum=0,sum1=0,h;
	float x0,xn,ans=0;
	printf("");
	scanf("%f%f",&x0,&xn);
	int i,n;
	printf("");
	scanf("%d",&n);
	h = (xn-x0)/n;
	sum = f(x0)+f(xn);
	for(i=1;i<=(n-1);i++)
	{
		sum1 = sum1 + f(x0+(i*h));
	}
	ans = h*(sum + (2*sum1))/2;
	printf("%f\n",ans);
}
