#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>

using namespace std;

int main(void)
{
	string st;
	int i,j,k;
	while(getline(cin,st))
	{
		k = -1;
		for (i = 0; i < st.size(); ++i)
		{
			if ((char)st[i] == ' ')
			{
				for (j = i - 1; j > k; --j)
				{
					cout<<st[j];
				}
				cout<<" ";
				k = i;
			}
		}
		for (i = st.size()-1; i > k; --i)
		{
			cout<<st[i];
		}
		cout<<endl;
	}
	return 0;
}