# factorial
#include<stdio.h>
main()
{
	int n,i,fac=1;
	printf("value of num:");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		fac=fac*i;
	}
	printf("d",fac);
}
