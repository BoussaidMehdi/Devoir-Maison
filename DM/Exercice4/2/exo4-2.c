#include <stdio.h>

#define N1 50
#define N2 100

int main(void)
{
    int i,j,n1,n2,n,cur_num = 0;
    printf("Choisissez la taille de T1(n1<=50)\n");
    scanf("%d",&n1);
    printf("Choisissez la taille de T2(n2<=100)\n");
    scanf("%d",&n2);
    int T1[N1],T2[N2],T3[N1+N2] = {0};
    for(i = 0 ; i < n1 ; i++)
    {
        printf("Choississez T1[%d]\n",i);
        scanf("%d",&n);
        T1[i] = n;
    } 
    for(i = 0 ; i < n2 ; i++)
    {
        printf("Choississez T2[%d]\n",i);
        scanf("%d",&n);
        T2[i] = n;
    }
    for(i = 0 ; i < n1 ; i++)
    {
        for(j = i ; j < n1 ; j++)
        {
            if(T1[i] > T1[j])
            {
                cur_num = T1[i];
                T1[i] = T1[j];
                T1[j] = cur_num;
            }             
        }
        printf("T1[%d] est egale a : %d\n",i,T1[i]);
    }  
    for(i = 0 ; i < n2 ; i++)
    {
        for(j = i ; j < n2 ; j++)
        {
            if(T2[i] > T2[j])
            {
                cur_num = T2[i];
                T2[i] = T2[j];
                T2[j] = cur_num;
            }             
        }
        printf("T2[%d] est egale a : %d\n",i,T2[i]);
    }
//********************************************************************************************
        for(i = 0 ; i < n1 ; i++)
        {
            T3[i] = T1[i];
            printf("T3[%d] est egale a : %d\n",i,T3[i]);
        }
        for(i = 0 ; i < n2 ; i++)
        {
            T3[i + n1] = T2[i];            
        }

        for(i = 0 ; i < (n1+n2) ; i++)
    {
        for(j = i ; j < (n1+n2) ; j++)
        {
            if(T3[i] > T3[j])
            {
                cur_num = T3[i];
                T3[i] = T3[j];
                T3[j] = cur_num;
            }             
        }
        printf("T3[%d] est egale a : %d\n",i,T3[i]);
    }  

}
