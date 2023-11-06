#include<stdio.h>
int main()
{
	int n,r,rev=0,t;
	scanf("%d",&n);//4321
	t=n; //storing n value in temporary no
	while(n>0)//0>0----->4>0
    {
    	r=n%10;//r=n%10---->4%10
    	rev=rev*10+r;//rev=1234
    	n=n/10;//n=n/10---->432/20--->4/10--->0
	}
	if(rev==t)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
