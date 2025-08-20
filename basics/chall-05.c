#include <stdio.h>

int main()
{

    int n;
    int *p;
    p = &n;
    printf("veuillez la nombre :\n");
    scanf("%d", p);
    if (*p % 2 == 0)
    {
        printf("la nombre est pair");
    }
    else
        printf("la nombre est inpair");
}