#include <stdio.h>

int main()
{
    int n, *p;

    p = &n;

    printf("veuillez saisir la nombre :\n");
    scanf("%d", p);

    for (int i = 1; i <= *p; i++)
    {
        if (*p % i == 0)
        {
            printf("%d\n", i);
        }
    }
}