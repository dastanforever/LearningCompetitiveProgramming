#include <cstdio>
#include <cmath>

using namespace std;

double distcal(int x1, int y1, int x2, int y2)
{
	return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

int main(void)
{
	int coor[8];
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<8;i+=2) scanf("%d %d",coor[i],coor[i+1]);
		bool b  = true;
		for(i=0;i<4;i+=2) if(distcal(coor[i],coor[i+1],coor[i+2],coor[i+3]) != distcal(coor[i+2],coor[i+3],coor[i+4],coor[i+5])) b = false;
		if(distcal(coor[i],coor[i+1],coor[i+2],coor[i+3]) != distcal(coor[i+2],coor[i+3],coor[i+4],coor[i+5])) b = false;
		if(b)
		{
			// Square | Rhombus.
		}
		else
		{
			b = true;
			if(distcal(coor[0]))
		}
	}


	return 0;
}