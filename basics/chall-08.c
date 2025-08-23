#include <stdio.h>
// vedio numero 17 exercice 85
int main()
{
    int a[100];

    int *p ,n;
    p = a;
      printf("veuillez saisir la nombre a:\n");
    scanf("%d", &n);

    for ( p = a; p <a+n ; p++)
     {
         printf("elimente %d :\n",p-a);
         scanf("%d", p);
     }
     
    for (p=  a; p < n+a; p++)
    {
         printf("%d\n", *p);
        
    }
}