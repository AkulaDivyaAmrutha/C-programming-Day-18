/* C program to print Armstrong or not*/
#include<stdio.h>
main()
{
	int n,r,temp,sum;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	printf("Armstrong Number");
	else
	printf("Not Armstrong Number");
}
