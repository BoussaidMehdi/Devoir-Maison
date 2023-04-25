#include <stdio.h>

#define N 20


int main(void)
{
    int taille = N;
    printf("Choississez la taille des 2 vecteur (plus petit que 20)\n");
    scanf("%d",&taille);
    if(taille <= N)
    {
        int T1[N] ,T2[N]= {0};        
        int n, final_num, scal_num = 0;
        for (int i = 0 ; i < taille ; i++)
        {
            printf("Veuilleur ecrire la valeur de T1[%d]\n",i);
            scanf("%d",&n);
            T1[i] = n;
        }    
        for (int i = 0 ; i < taille ; i++)
        {
            printf("Veuilleur ecrire la valeur de T2[%d]\n",i);
            scanf("%d",&n);
            T2[i] = n;
        }
        for(int i = 0 ; i < taille ; i++)
        {         
            scal_num  = T1[i]*T2[i];
            final_num = scal_num + final_num;
        }
        printf("le produit de T1 et T2 est %d\n",final_num);
    }
    else
    {
        return main();
    }


}
    