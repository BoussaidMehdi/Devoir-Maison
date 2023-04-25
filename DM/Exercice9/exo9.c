#include <stdio.h>
#include <stdlib.h>

#define M 50

int est_inverse(float T1[M][M],float T2[M][M],int n)
{
    float result, cur;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0 ; j < n; j++)
        {
            result = 0;
            if(i==j) cur = 1 ;
            else cur = 0;

            for (int k = 0 ; k < n; k++)
            {
                result += T1[i][k] * T2[k][j];
            }
            if(result != cur) return 0;            
        }        
    }
    return 1;    
}


int main(void)
{
    float T1[M][M], T2[M][M];
    int n = 0;
    printf("entrez la taille de la matrice :\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Entrez T1[%d][%d]: ", i, j);
            scanf("%f", &T1[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Entrez T2[%d][%d]: ", i, j);
            scanf("%f", &T2[i][j]);
        }
    }
    if(est_inverse(T1,T2,n))
    {
        printf("la matrice T2 est l'inverse de T1\n");
    }
    else
    {
        printf("la matrice T2 n'est pas l'inverse de T1\n");
    }

    return 0;
}
