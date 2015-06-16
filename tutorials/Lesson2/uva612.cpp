#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string.h>


using namespace std;

struct data
{
	char strr[55];
	int inversions;
}number[105];

void makeinversion(int n, int m)
{
	int i,j,k;
	for (i = 0; i < m; ++i)
		for (j = 0; j < n; ++j)
			for (k = j+1; k < n; ++k)
				if(number[i].strr[k] < number[i].strr[j]) 
					number[i].inversions++;
}

bool compare(data d1, data d2) { return d1.inversions < d2.inversions;}

int main(void)
{
	int m,n,i,t;

	scanf("%d\n\n",&t);
	while(t--)
	{
		scanf("%d %d\n",&n,&m);
		char arr[55];
		for (i = 0; i < m; ++i)
		{
			cin.getline(arr,sizeof(arr));
			strcpy(number[i].strr,arr);
			number[i].inversions = 0;
		}
		makeinversion(n,m);
		stable_sort(number,number+m,compare);
		for (i = 0; i < m; ++i)
			cout<<number[i].strr<<endl;
		if(t) cout<<endl;
	}
	return 0;
}