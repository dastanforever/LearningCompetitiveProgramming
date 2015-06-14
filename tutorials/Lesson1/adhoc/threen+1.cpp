#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int n1,n2,res=0,i,maxres=0,ex,now;
	while(scanf("%d %d",&n1,&n2) != EOF)
	{
		printf("%d %d ", n1,n2);
		i = n1<n2?n1:n2;
		ex = n1<n2?n2:n1;
		maxres = 0;
		for (; i <= ex; ++i)
		{
			now = i;
			res = 1;
			while(now != 1)
			{
				if (now%2 == 1)
				{
					now = 3*now+1;
					res++;
				}
				now >>= 1;
				res++;
			}
			maxres =  res>maxres?res:maxres;
		}
		printf("%d\n", maxres);
	}
	return 0;
}