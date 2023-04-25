#include <stdio.h>

//declaration de fonction
int nbre_diviseurs();
int premier();
int main(void)
{
    printf("Exercice 3-1:\n");
    int n,rep = 0;
    

    printf("Choisisez un nombre\n");
    scanf("%d",&n);
    printf("%d a %d diviseurs\n",n,nbre_diviseurs(n));
    if(premier(n) == 1 ) printf("%d est premier\nvoulez vous connaitre tout les nombres premier de 1 a 1000[(oui)0/(non)1]\n",n);
    else 
    {
        printf("%d n'est pas premier\nvoulez vous connaitre tout les nombres premier de 1 a 1000[(oui)0/(non)1]\n",n);
    }
    scanf("%d",&rep);
    if(rep == 0)
    {
        for(int i = 1;i <=1000 ; i++)
        {
            if(premier(i) == 1 ) printf("%d est premier.\n",i);
        }
    }
    
    return 0;
}

int nbre_diviseurs(int num)
{
    int nb_div = 0;
    for(int i = 1 ; i <= num ; i++)
    {
        if(num%i == 0 ) nb_div ++;            
    }
    return nb_div;
}
int premier(int prem)
{
    if(nbre_diviseurs(prem) == 2) return 1;
    else return 0;
}