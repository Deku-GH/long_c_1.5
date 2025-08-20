// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   float a ,b ;
   float *p ,*q ;
    p = &a;
    q = &b;
    
    printf("veuillez saisir la valeur de a : \n");
    scanf("%f",p);
     printf("veuillez saisir la valeur de  b : \n");
    scanf("%f",q);
    printf("%.2f \n",*p);
    printf("%.2f \n",*q);
    printf ("----------------------\n");
    printf("%.2f \n",a+b);
    printf("%.2f \n",a-b);
    printf("%.2f \n",a*b);
    
    // la divsion ne pas complite
    printf("%.2f \n",a/b);
}