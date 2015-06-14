#include <cstdio>
#include <iostream>

using namespace std;

char ch,mat[3][3];

bool winning(char x)
{
	int i;
	for (i = 0; i < 3; ++i)	if(mat[0][i] == x && mat[1][i] == x && mat[2][i] == x) return true;
	for (i = 0; i < 3; ++i)	if(mat[i][0] == x && mat[i][1] == x && mat[i][2] == x) return true;
	if (mat[0][0] == x && mat[1][1] == x && mat[2][2] == x) return true;
	if (mat[0][2] == x && mat[1][1] == x && mat[2][0] == x) return true;
	return false;
}

int main(void)
{
	int t,x,o,i,j;
	scanf("%d\n",&t);
	while(t--)
	{
		x = 0;
		o = 0;
		for (i = 0; i < 3; ++i)
		{
			for (j = 0; j < 3; ++j)
			{
				scanf("%c",&mat[i][j]);
			}
			scanf("\n");
		}
		for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
		{
			if (mat[i][j] == 'X') x++;
			else if (mat[i][j] == 'O') o++;
		}
		if(winning('X') && winning('O')) printf("no\n");
		else if(x-o < 0 || x-o > 1) printf("no\n");
		else if(winning('X') && x-o != 1) printf("no\n");
		else if(winning('O') && x-o != 0) printf("no\n");
		else printf("yes\n");

		scanf("\n");
	}
	return 0;
}