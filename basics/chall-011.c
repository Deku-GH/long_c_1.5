#include <stdio.h>
// vedio numero 17 exercice 88
int main()
{

    int A[100], B[100];
    int *P1, N, X;
    P1 = A;
    int *P2;
    P2 = B;
    printf("quelle la  taille de tabeau : \n");
    scanf("%d", &N);

    for (P1 = A; P1 < A + N; P1++)
    {
        printf("elenent[%d] =", P1 - A);
        scanf("%d", P1);
    }

    printf("\n=====================================================\n");
    printf("quelle la  taille de tabeau : \n");
    scanf("%d", &X);

    for (P2 = B; P2 < B + X; P2++)
    {
        printf("elenent[%d] =", P2 - B);
        scanf("%d", P2);
    }
    printf("\n=====================================================\n");
    for (P1 = A + N, P2 = B; P1 < A + (N + X); P1++, P2++)
    {
        *P1 = *P2;
    }
    printf("\n=====================================================\n");
    for (P1 = A; P1 < A + (N + X); P1++)
    {
        printf("elenent[%d] = %d \n", P1 - A, *P1);
    }
}