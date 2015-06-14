#include <cstdio>
#include <iostream>

using namespace std;

int main(void)
{
	double h,u,d,f,dec_fac,dis_cli = 0;
	int i;
	fopen("MyFile.txt","r");
	while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f),h || u || d || f)
	{
		f /= 100.0;
		dec_fac = f*u;
		i = 0;
		dis_cli = 0;
		while(1)
		{
			i++;
			dis_cli += u;
			if (dis_cli > h)
			{
				printf("success on day %d\n", i);
				break;
			}
			dis_cli -= d;
			if (dis_cli < 0)
			{
				printf("failure on day %d\n", i);
				break;
			}
			u -= dec_fac;
			if (dis_cli < 0)
			{
				dis_cli = 0;
			}
		}
	}
	fclose(stdout);
	return 0;
}