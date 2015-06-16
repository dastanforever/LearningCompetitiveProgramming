#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

struct data
{
	int index;
	string dt;
};

bool compare(data left,data right){ return left.index < right.index;}

int main(void)
{
	int n,i,t;
	vector < data > mydata;
	data ele;
	string st1, st2, dt;
	scanf("%d\n\n",&t);
	while(t--)
	{
		getline(cin,st1);
		getline(cin,st2);
		cin.ignore();
		stringstream s1(st1), s2(st2);
		while(s1>>i)
		{
			s2>>dt;
			ele.index = i;
			ele.dt = dt;
			//cout<<"Ele : "<<ele.index<<" "<<ele.dt;
			mydata.push_back(ele);
		}
		sort(mydata.begin(),mydata.end(),compare);
		for (i = 0; i < mydata.size(); ++i)
		{
			cout<<mydata[i].dt<<endl;
		}
		mydata.clear();
		if(t) cout<<endl;
	}
	return 0;
}
