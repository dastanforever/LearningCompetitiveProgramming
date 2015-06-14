#include <cstdio>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector < long long int > factorials;
vector < char > str;

void makefact()
{
	int i;
	long long int res = 1;
	factorials.push_back(1);
	for (i = 1; i < 21; ++i)
	{
		res *= i;
		factorials.push_back(res);
	}

}

int main(void)
{
	int i;
	long long int t,N, temp,quotient,l;
	makefact();
	scanf("%lld",&t);
	string st;
	while(t--)
	{
		str.clear();
		cin>>st;
		scanf("%lld",&N);
		for (i = 0; i < st.size(); ++i)
		{
			str.push_back(st[i]);
		}
		sort(str.begin(),str.end());
		l = st.size();
		st = "";
		for (i = l-1; i >= 0; --i)
		{
			quotient = N/factorials[i];
			N = N % factorials[i];
			st += str[quotient];
			str.erase(str.begin()+quotient);
		}
		cout<<st<<endl;
	}
	return 0;
}