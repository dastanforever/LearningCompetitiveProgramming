#include <cstdio>
#include <map>
#include <string.h>
#include <iostream>

using namespace std;

map < char, int> price;

int main(void)
{
	int t,n1,n2,i,ele,j;
	double res;
	char ch, charr[10005];
	scanf("%d",&t);
	while(t--)
	{
		res = 0;
		price.clear();
		scanf("%d\n",&n1);
		for (i = 0; i < n1; ++i)
		{
			scanf("%c %d\n",&ch,&ele);
			price[ch] = ele;
		}
		scanf("%d\n",&n2);
		for (i = 0; i < n2; ++i)
		{
			cin.getline(charr,sizeof(charr));
			for (j = 0; j < strlen(charr); ++j)	res += price[charr[j]];
		}
		printf("%.2lf$\n",res/100);
	}
	return 0;
}