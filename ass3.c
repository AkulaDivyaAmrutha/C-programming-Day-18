/* C program to print reverse order of the number*/
#include<stdio.h>
main()
{
	int n,r,temp,sum,rev;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%d",rev);
}
