#include <cstdio>

using namespace std;

int returnres(int n, int k)
{
    if(k == 1) return 1;
    else
    {
        int res = 0;
        for (int i = 0; i <= n; i++) {
            res += (returnres(i,k-1)+returnres(n-i,k-1));
        }
        return res;
    }
}

int main(void)
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,k,res;

    while (scanf("%d%d",&n,&k) == 2 && n != 0 && k!= 0) {
    res = returnres(n,k);
    printf("%d\n", res);
    }

    return 0;
}
