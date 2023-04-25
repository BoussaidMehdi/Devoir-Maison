#include <stdio.h>

#define N 20

int main(void)
{
    int n , i , j = 0;
    int T[N] = {0};
    printf("Choisissez la taille du tableau N <= 20\n");

    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
    {
        printf("Choississez la valeur de T[%d]\n",i);
        scanf("%d",&T[i]);
        printf("T[%d] est egale a : %d \n",i,T[i]);         
    }
    for(i = 1 ; i <= n ; i++)
    {
        printf("la nouvelle valeur de T[%d] est egale a : %d \n",i,T[n - i]);
    }
}