#include <stdio.h>

#define N 100
#define M 30

void print_mat(float matric[N][M], int n, int m);
int min(float line[M], int m);

int main(void)
{
    int n, m, index;
    float mat[N][M];
    printf("choississez la taille N <= 100 : ");
    scanf("%d",&n);
    printf("choississez la taille M <= 30 : ");
    scanf("%d",&m);

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            printf("choisissez la valeur de mat[%d][%d]: ",i, j);
            scanf("%f",&mat[i][j]);
        }
    }

    print_mat(mat, n, m);

    for (int i = 0; i < n; i++)
    {
        index = min(mat[i], m);
        printf("le minimeme de la line %d est %.2f de l'indice %d\n", i, mat[i][index], index + 1);
    }
    

}

void print_mat(float matric[N][M], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%.2f ", matric[i][j]);
        }
        printf("\n");
    }
}

int min(float line[M], int m)
{
    float minimume = line[0];
    int index = 0;
    for (int i = 1; i < m; i++)
    {
        if (minimume > line[i])
        {
            index = i;
            minimume = line[i];
        }  
    }
    return index;
}