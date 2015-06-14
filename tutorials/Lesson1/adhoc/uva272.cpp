#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(void)
{
	int i,flag = 0;
	string st;
	while(getline(cin,st))
	{
		for (i = 0; i < st.size(); ++i)
		{
			if (st[i] == '"')
			{
				if (flag)
					printf("''");
				else
					printf("``");
				flag = flag ^ 1;
			}
			else
				printf("%c", st[i]);
		}
		printf("\n");
	}
	return 0;
}