#include <cstdio>
#include <vector>

using namespace std;

vector < int > arr;

int inv = 0;

void swap(int i, int j)
{
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int main(void)
{
	int t,ele,n,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&ele);
			arr.push_back(ele);
		}
		for (i = 0; i < n; ++i)
			for (j = i+1; j < n; ++j)
				if (arr[j] < arr[i]) { swap(j,i); inv++;}
		printf("Optimal train swapping takes %d swaps.\n", inv);
		inv=0;
		arr.clear();
	}
	return 0;
}