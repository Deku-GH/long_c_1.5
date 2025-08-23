#include <stdio.h>
// vedio numero 17 exercice 87
int main()
{

    int T[100];
    int *P, N, X;
    P = T;
    int *P2;
    P2 = T;
    printf("quelle la  taille de tabeau : \n");
    scanf("%d", &N);

    for (P = T; P < T + N; P++)
    {
        printf("elenent[%d] =", P - T);
        scanf("%d", P);
    }

    int tmp;

    for (P = T, P2 = T + (N - 1); P < P2; P++, P2--)
    {
        tmp = *P;
        *P = *P2;
        *P2 = tmp;
    }

    for (P = T; P < T + N; P++)
    {
        printf("elenent[%d] = %d \n", P - T, *P);
    }
}