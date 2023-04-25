#include <stdio.h>
#include <string.h>
#define N 20

int main(void)
{
    int n = 0;

    char mot[N],inverse[N] ;
    printf("ecrivez le mot en question\n");
    gets(mot);
    strcpy(inverse,mot);

    strrev(inverse);
    n = strcmp(inverse,mot);

    if(n == 0)
    {
        printf("le mot %s est palindrome\n",mot);
    } 
    else printf("le mot %s n'est pas palindrome\n",mot);


    
}