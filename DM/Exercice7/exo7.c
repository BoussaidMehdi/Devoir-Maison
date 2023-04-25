#include <stdio.h>
#include <stdlib.h>

#define M 50

int est_Symetrique(float matrice[M][M],int n,int m)
{
    if(n != m) return 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(j == i) continue;
            else if(matrice[i][j] != matrice[j][i]) return 0;
        }
        
    }
    return 1;
    
}

int main(void)
{
    int n,m;
    float mat[M][M];
    printf("coisissez la taille des lignes de la matrice n <= 50\n");
    scanf("%d",&n);
    
    printf("coisissez la taille des cologne de la matrice m <= 50\n");
    scanf("%d",&m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("entrez la valeur de mat[%d][%d]",i,j);
            scanf("%f",&mat[i][j]);
        }        
    }

    if(est_Symetrique(mat,n,m))
    {
        printf("la matrice est symetrique\n");
    }
    else printf("la matrice n'est pas symetrique\n");
    

    return 0;
}