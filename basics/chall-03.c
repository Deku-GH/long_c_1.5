#include <stdio.h>

int num(int a)
{
    int count = 0;
    while (a != 0)
    {
        a = a / 10;
        count++;
    }
    return (count);
}
int main()
{
    int N;

    printf("enterez un numbre :");
    scanf("%d", &N);

    printf("la numbre de dijit  : %d ", num(N));
}