#include <cstdio>
#include <cstring>

using namespace std;

int b[20];

int lis(int a[],int n,int k)
{
    int max = 0,i,j;
    for (i = 0; i < n; i++) {
        for (j = i-1; j >= 0; j--) {
            if((a[j] < a[i]) && (b[j] < b[i])) {
                b[i] = b[j]+1;
            }
        }
        if(j==-1) b[i] = 1;
        max = max < b[i]?b[i]:max;
        if(max == k) break;
    }
    return max;
}


int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    memset(b,0,sizeof(int));
    int ar[10],n,k;
    scanf("%d%d",&n,&k);
    for(int i = 0; i < n; ++i)
    scanf("%d",&ar[i]);
    int res = lis(ar,n,k);
    printf("%d\n", res);
    for (int i = 0; i < 20; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
