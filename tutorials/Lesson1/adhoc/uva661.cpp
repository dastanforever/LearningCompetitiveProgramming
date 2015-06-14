#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
	int n,m,c,ele,i,j,maxr=0,curr = 0;
	int capacityarr[21],statearray[21];
	j = 1;
	while(scanf("%d %d %d",&n,&m,&c),n||m||c)
	{
		memset(capacityarr,0,sizeof(capacityarr));
		memset(statearray,0,sizeof(statearray));
		for (i = 1; i < n+1; ++i)
		{
			scanf("%d",&ele);
			capacityarr[i] = ele;
		}
		for (int i = 0; i < m; ++i)
		{
			scanf("%d",&ele);
			if (!statearray[ele])
				curr += capacityarr[ele];
			else
				curr -= capacityarr[ele];
			statearray[ele] ^= 1;
			maxr = max(curr,maxr);
		}
		printf("Sequence %d\n", j);
		if (maxr > c)
		{
			printf("Fuse was blown.\n\n");
		}
		else
		{
			printf("Fuse was not blown.\n");
			printf("Maximal power consumption was %d amperes.\n\n", maxr);
		}
		j++;
		curr = 0;
		maxr = 0;
	}
	return 0;
}