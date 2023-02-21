/* C program to  palindrome or not*/
#include<stdio.h>
main()
{
	int n,r,rev,sum,temp;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(temp==rev)
	printf("Palindrome");
	else
	printf("Not Palindrome");
}
