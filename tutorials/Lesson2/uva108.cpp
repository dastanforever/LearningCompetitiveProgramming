#include <cstdio>
#include <cstring>

using namespace std;

int arr[105][105],sumar[105][105];

void makesum(int a, int i, int j)
{
    sumar[i][j] = a + sumar[i-1][j] + sumar[i][j-1] - sumar[i-1][j-1];
}

// 1 based index as input.
int returnrangesum(int i1,int j1,int i2,int j2)
{
    return (sumar[i2][j2] - sumar[i2][j1-1] - sumar[i1-1][j2] + sumar[i1-1][j1-1]);
}

int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,i,j,k,l;

    memset(sumar,0,105*105);

    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d",&arr[i][j]);
            makesum(arr[i][j],i,j);
        }
    }

    int mini = -100000000,temp;

    for (i = 1; i <= n; i++) for (j = 1; j <= n; j++)
    for (k = i; k <= n; k++) for (l = j; l <= n; l++)
    {
        temp = returnrangesum(i,j,k,l);
        mini = temp>mini?temp:mini;
    }

    printf("%d\n", mini);

    return 0;
}
