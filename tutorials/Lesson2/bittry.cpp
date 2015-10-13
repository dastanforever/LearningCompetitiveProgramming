#include <cstdio>

using namespace std;

#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))

int main(void)
{
    int S = 0;
    setBit(S,0);
    printf("%d\n", S);
    printf("%d\n", isOn(S,0));
}
