#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;

char a1[1000];//被加数
char b1[1000];//加数
int a[1000];//被加数
int b[1000];//加数
int c[1000];//和
int lena, lenb, lenc, x;//被加数位数，加数位数，和的位数，进位
int j,n;

int main()
{
	cin>>n;
	j=1;
	while(n--){
	memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));	
	cin >> a1; //输入被加数
	cin >> b1;//加数
	printf("Case %d:\n",j);
	j++;
	printf("%s + %s = ",a1,b1);
	lena = strlen(a1);//被加数位数
	lenb = strlen(b1);//加数位数
	for (int i = 0; i < lena; i++)
		a[lena - i] = a1[i] - '0';//被加数反过来并且转换成整型 
	for (int i = 0; i < lenb; i++)
		b[lenb - i] = b1[i] - '0';//加数反过来转换成整型 
	lenc = 1;//和的位数
	x=0;
	while (lenc <= lena || lenc <= lenb)//直到位数小的加完
	{
		c[lenc] = a[lenc] + b[lenc] + x;//每一位加和并且加上上一次的进位
		x = c[lenc] / 10;//本次的进位
		c[lenc] %= 10;//取个位数
		lenc++;//位数+1
	}
	c[lenc] = x;
	if (c[lenc] == 0)//如果最高位为0
		lenc--;//长度减一
			for (int i = lenc; i >= 1; i--)//倒着输出和
		            cout << c[i];
		            cout<<endl;
					if(n!=0){
		               cout<<endl;
					}
	}
	return 0;
}

