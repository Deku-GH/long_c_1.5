#include <stdio.h>
#include <string.h>
int main(){
    char str[100] ;
printf("enter a name :");
scanf("%s",str);
int lowkey =0 ,highkey = 0;
for (int i = 0; i < strlen(str); i++)
{
    if (str[i]>96 && str<= 122)
    {
        lowkey++;
    }
    else if (str[i]>65 && str[i]<90)
    {
        highkey++;
    }
    
    
}


}