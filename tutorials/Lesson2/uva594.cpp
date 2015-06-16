#include<cstdio>
using namespace std;
union
{
int Num;
char ch[4];
} A,B;
int main()
{
long int N;
while( scanf(“%d”,&A.Num)==1 )
{
B.ch[0]=A.ch[3];
B.ch[1]=A.ch[2];
B.ch[2]=A.ch[1];
B.ch[3]=A.ch[0];
printf(“%d converts to %d\n”,A.Num,B.Num);
}
return 0;
}