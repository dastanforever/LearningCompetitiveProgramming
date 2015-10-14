#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void)
{
    freopen("input.txt","r",stdin);
    freopen("listtodo.txt","w",stdout);

    int n,arr[115],j,temp;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = n-1; i > 0; i--) {
        j = rand() % (i);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}
