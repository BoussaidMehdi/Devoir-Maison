#include <stdio.h>
#define L 30
#define C 40


int max(float line[C]);

int main(void)
{
    int n = 0;
    float mat[L][C];
    for (int i = 0 ; i < L; i++)
    {
        for (int j = 0 ; j < C; j++)
        {
            printf("entrez la valeur de mat[%d][%d] :\n",i,j);
            scanf("%f",&mat[i][j]);
        }        
    }  
    for (int i = 0; i < L; i++)
    {
        printf("l'indice du maximum de mat a la %d line est %d \n ",i,max(mat[i]));
    }
                        
}    

int max(float line[C])
{
    float maxi = line[0];
    int cur = 0;
    for (int i = 0; i < C; i++)
    {
        if(maxi < line[i]) {
            cur = i;
        }       
    }
    return cur; 
}