#include <cstdio>
#include <algorithm>
#include <vector>


using namespace std;

struct point{
	double px1;
	double px2;
	double index;
};

bool compare (point lhs, point rhs) {return lhs.px1 < rhs.px1;}

int main(void)
{
	int t,n,i,j;
	double p1x,p2x,r;
	vector < point > points;
	point parr;
	vector < double > x;

	scanf("%d",&t);
	while(t--)
	{
		points.clear();
		x.clear();
		scanf("%d",&n);
		for (i = 0; i < n; ++i)
		{
			scanf("%lf %*lf %lf %*lf %lf", &parr.px1,&parr.px2,&parr.index);
			x.push_back(parr.px1);
			x.push_back(parr.px2);
			if (parr.px1 > parr.px2)
				swap(parr.px1,parr.px2);
			points.push_back(parr);
		}
		sort(x.begin(),x.end());
		printf("%ld\n", 2*points.size()+1);
		for (i = 0; i < x.size(); ++i)
		{
			if (i == 0)
			{
				printf("-inf %0.3lf %0.3lf\n", x[0],1.000);
				continue;
			}
			double result = 1.000;
			for (j = 0; j < points.size(); ++j)
			{
				if (x[i-1] >= points[j].px1 && x[i] <= points[j].px2)
				{
					result *= points[j].index;
				}
			}
			printf("%0.3lf %0.3lf %0.3lf\n", x[i-1],x[i],result);
		}
		printf("%0.3lf +inf %0.3lf\n", x[x.size()-1],1.000);
		if (t)
			printf("\n");
	}
	return 0;
}