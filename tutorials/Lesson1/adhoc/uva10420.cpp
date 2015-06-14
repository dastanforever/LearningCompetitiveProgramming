#include <cstdio>
#include <map>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

map < string, int > values;

int main(void)
{
	string st;
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		getline(cin,st);
		st = st.substr(0,st.find(" "));
		if(values.count(st) > 0)
			values[st]++;
		else
			values[st] = 1;
	}
	map<string,int>::iterator i = values.begin();
	for (i; i != values.end() ; ++i)
	{
		cout<<i->first<<" "<<i->second<<endl;
	}
	return 0;
}