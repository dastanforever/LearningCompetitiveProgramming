#include <cstdio>
#include <vector>

using namespace std;

vector < int > vec;

int main(void)
{
	int i,ele;
	for ( i = 0; i < 1000000; ++i)
	{
		scanf("%d",&ele);
		arr[ele]++;
	}
	for ( i = 0; i < 1000000; ++i)
	{
		if (!arr[ele])
		{
			/* code */
			printf("%d\n", i);
			return 0;
		}
	}
	return 0;
}