#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;
int main(void)
{
	char timer[20];
	double lastspeed = 0,lastseconds = 0,currseconds = 0, dist = 0,nspeed;
	int n,hours,min,sec;
	while(cin.getline(timer, sizeof(timer)))
	{
		n = sscanf(timer,"%d:%d:%d %lf",&hours,&min,&sec,&nspeed);
		currseconds = hours*60*60 + min*60 + sec;
		dist += ((currseconds-lastseconds) * lastspeed);
		lastseconds = currseconds;
		if (n == 3)	printf("%02d:%02d:%02d %0.2lf km\n", hours,min,sec,dist/3600);
		else lastspeed = nspeed;
	}
	return 0;
}