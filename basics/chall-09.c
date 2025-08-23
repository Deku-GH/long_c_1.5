#include <stdio.h>
// vedio numero 17 exercice 86
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

    printf("entez le numero x : ");
    scanf("%d", &X);
    int count = 0;
    for (P = T; P < T + N; P++)
    {
        *P2 = *P;
        if (*P2 != X)
        {

            P2++;
        }
    }
    N = P2 - T;
    for (P = T; P < T + N; P++)
    {
        printf("elenent[%d] = %d \n", P - T, *P);
    }
}