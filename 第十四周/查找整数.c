#include<stdio.h>
int main()
{
	int n,x,i,flag=0;
	int N;
	scanf("%d %d",&n,&x);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("%d",i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Not Found");
	}
}