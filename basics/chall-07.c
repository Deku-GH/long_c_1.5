#include <stdio.h>

void change(int *x, int *y)
{
    int tmp;
    if (*y * *x >= 0)
    {

        tmp = *x;
        *x = *y;
        *y = tmp;
    }
    else
    {
        tmp = *x;
        *x += *y;
        *y *= tmp;
    }
}

int main()
{
    int a, b;

    printf("veuillez saisir la nombre a:\n");
    scanf("%d", &a);

    printf("veuillez saisir la nombre b:\n");
    scanf("%d", &b);

    change(&a, &b);

    printf("a = %d :\n", a);

    printf("b = %d:\n", b);
}