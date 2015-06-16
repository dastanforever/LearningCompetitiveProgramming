#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	double maxres,comp,price,req;
	int n, p;
	int i,j,num = 0;
	string st,name,test;
	while(scanf("%d %d\n",&n,&p), n != 0.0 && p != 0.0)
	{
		maxres = 0;
		comp = 0;
		if (num)cout<<endl;
		for (i = 0; i < n; ++i)
			getline(cin,test);
		for (i = 0; i < p; ++i)
		{
			getline(cin,st);
			scanf("%lf %lf\n",&price,&req);
			for (j = 0; j < req; ++j)
				getline(cin,test);
			if ((double)(req) > comp || ((double)req == comp && price < maxres))
			{
				maxres = price;
				comp = req;
				name = st;
			}
		}
		cout<<"RFP #"<<++num<<endl;
		cout<<name<<endl;
	}
	return 0;
}