#include<stdio.h>
int fun(char *str,char *substr);
int main()
{ char str[81]="asdasasdfgasdaszx67asdmklo",substr[4]="asd";
 int n;
 n=fun(str,substr);
 printf("n=%d\n",n);
 return 0;
}
int fun(char *str,char *substr)
{
	int i=0,j=0,k=0,count=0;
	for(i=0;*(str+i)!='\0';i++)
	{
		for(j=i,k=0;*(substr+k)==*(str+j);j++,k++)
		{
		
			if(*(substr+k+1)=='\0')
			{
				count++;
				break;
			}
		}
	}
		*substr=&count;
}
	
