#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	long long int in;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&in);
		in *= 63;
        in += 7492;
        in *= 235;
        in /= 47;
        in -= 498;
        in /= 10;
		printf("%d\n",(int)abs(in%10));
	}
	return 0;
}