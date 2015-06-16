#include <cstdio>
#include <math.h>

using namespace std;

int main(void)
{
	int t;
	scanf("%d",&t);
	double m,n;
	while(t--)
	{
		scanf("%lf %lf",&m,&n);
		printf("%0.0lf\n",ceil((m-2)/3)*ceil((n-2)/3));
	}
	return 0;
}