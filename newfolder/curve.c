#include<stdio.h>
#include<math.h>
void main()
{
	int i,n;
	float a,b,x[20],y[20],sx,sy,sxx,sxy;
	printf("Enter the no. of data: ");
	scanf("%d",&n);
	printf("Enter the data: ");
	for(i=1;i<=n;i++)
	{
		scanf("%f%f",&x[i],&y[i]);
	}
	sx=0;sy=0;sxx=0;sxy=0;
	for(i=1;i<=n;i++)
	{
		sx += x[i];
		sy += y[i];
		sxx += x[i] * x[i];
		sxy += x[i] * y[i];
	}
	a = (sy*sxx-sx*sxy)/(n*sxx-sx*sx);
	b = (n*sxy-sx*sy)/(n*sxx-sx*sx);
	printf("The fitted line is y = %f+(%f)x\n",a,b );
}
