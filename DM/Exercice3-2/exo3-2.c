#include <stdio.h>
#include <math.h>
//exercice 3-2:
float puissance(float x , int n)
{
    float final_num = 1;
    for(int i = 1 ;i <= n;i++)
    {
        final_num = x * final_num;
    }    
    return final_num;
}
float polynome(int d , float x)
{
    float num1 = 0;
    float final_num = 0;
    for(int i = 1 ; i <= d ; i++)
    {
        num1 = puissance(x , i);
        final_num = num1/i + final_num;
    }
    return final_num;
}
float polynome2(int d , float x)
{
    float num1 = 0;
    float final_num = 0;
    for(int i = 1 ; i <= d ; i++)
    {
        num1 = pow(x,i);
        final_num = num1/i + final_num;
    }
    return final_num;
}
void polynome3(float x)
{
    printf("a quel degree est votre polynome ?\n");
    int d = 0;
    scanf("%d",&d);
    printf("le polynome de valeur %0.1f de degree %d est : %f \n",x,d,polynome2(d,x));
    return;
}

int main(void)
{
//1)********************************************************************************************************    
    printf("Exercice 3-2:\n");
    int n = 0;
    float x = 0;
    printf("choississez un nombre \n");
    scanf("%f",&x);
    printf("a quel puissnace ce nombre doit il etre elevee\n");
    scanf("%d",&n);
    printf("%f puissance %d est egale a %f\n",x,n,puissance(x,n));
//2)********************************************************************************************************
    printf("choisissez le degree du polynome \n");
    scanf("%d",&n);
    printf("choississez la valeur de X\n");
    scanf("%f",&x);
    printf("la valeur du polynome est de %f\n",polynome(n,x));
//3)********************************************************************************************************
    printf("la valeur du polynome est de %f\n",polynome2(n,x));
//4)********************************************************************************************************
    polynome3(3);
    polynome3(4);
    polynome3(5);
    polynome3(16);
    polynome3(55);
    polynome3(77);
    return 0;   
}
