#include<stdio.h>
#include<math.h>

float fun(float x)
{
	return((x*x*x)-(4*x)-9);
}

void main()
{
	float x,x1,x2,e,f,f1,f2;
	printf("Enter the initial guess values:");
	scanf("%f%f",&x1,&x2);
	x=(x1+x2)/2.0;
	f=fun(x);
	f1=fun(x1);
	f2=fun(x2);
	printf("Enter the error alowed in the solution:");
	scanf("%f",&e);
	while(fabs(x2-x1)>e)
	{
        	if(f*f1<0)
   	  	{
			x2=x;
		}
		else
	  	{
			x1=x;
		}
        	x=(x1+x2)/2.0;
 		f=fun(x);
		f1=fun(x1);
		f2=fun(x2);
      	}
     	printf("The approximate root is:%f\n",x);
}


