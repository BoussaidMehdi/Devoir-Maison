#include <stdio.h>
#include <stdlib.h>
#define M 50

int main(void)
{
    int n,m,p;
    float T1[M][M],T2[M][M],T3[M][M];
    printf("Entrez la valuer de n \n");
    scanf("%d",&n);
    
    printf("Entrez la valuer de m \n");
    scanf("%d",&m);
    
    printf("Entrez la valuer de p \n");
    scanf("%d",&p);

    for (int i = 0; i <  n ; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("entrez T1[%d][%d]\n",i,j);
            scanf("%f",&T1[i][j]);
        }        
    }

    for (int i = 0; i <  n ; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("entrez T2[%d][%d]\n",i,j);
            scanf("%f",&T2[i][j]);
        }        
    }

    for (int i = 0; i <  n ; i++)
    {
        for (int j = 0; j < m; j++)
        {
            T3[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                T3[i][j] += T1[i][k] * T2[k][j];
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("| ");
        for (int j = 0; j < m; j++)
        {
            printf("%f ", T3[i][j]);
        }
        printf("|\n");
    }

    return 0 ;   

}