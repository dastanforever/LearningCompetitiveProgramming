#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))

char str[11];
int mainRow[11],arr[11];
int res;

void process(int n)
{
    int i;
    for(i = 0; i < n; ++i)
    {
        gets(str);
        for (size_t j = 0; j < n; j++)
            if(str[j] == '*') setBit(arr[i],n-j-1);
    }
}

bool isFine(int col, int row)
{
    int i;
    for (i = 0; i < row; i++) {
        if((mainRow[i] == col) || (abs(mainRow[i] - col) == abs(i - row))) return false;
    }
    return true;
}

void checker(int row,int max)
{
    for (size_t i = 0; i < max; i++) {        // i is column.
        if (isOn(arr[row],i) == 0) {
            if (isFine(i,row)) {
                mainRow[row] = i;
                if(row == max-1)
                {
                    res++;
                    //for (size_t j = 0; j < max; j++) printf("(%d, %d) ",j, mainRow[j]);
                    //printf("\n");
                }
                checker(row+1,max);
            }
        }
    }
}

int main(void)
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);


    int n;
    while(scanf("%d\n",&n) && n != 0)
    {
        memset(mainRow,0,sizeof mainRow);
        memset(arr,0,sizeof arr);

        process(n);
        res = 0;

        //for (size_t i = 0; i < n; i++) {
        //    printf("%d\n", arr[i]);
        //}

        //printf("%d %d\n", isOn(arr[0],1), isOn(arr[0],2));

        checker(0,n);
        printf("%d\n", res);
    }
    return 0;
}
