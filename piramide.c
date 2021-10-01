#include <stdio.h>

int main (void)
{
    int altura = 0;
    int asteriscos; 
    int espaco; 

     while (altura <= 0)
     {
         printf("Digite a altura: ");
         scanf("%d", &altura);
     }

    for (int i = 1; i <= altura; i++)
    {
        for (espaco = i; espaco <= altura; espaco++)
        {
            printf(" ");
        }
        for (asteriscos = 2*i-1; asteriscos > 0; asteriscos--)
        {
            printf("*"); 
        } 
        printf("\n");
    }
}