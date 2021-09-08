#include <stdio.h>
#include <math.h>
/*
Faca um programa que leia o numero de termos e um valor positivo para X. Calcule e mostre o valor da serie a seguir:
s = -x**2/1! + x**3/2! -x**4/3! +x**5/4! -x**6 /3! + x**7 /2! -x**8/1! +x**9/2! -x**10/3! ...
*/
int fact (int num); 
int main (void) 
{
    int termos, x;
    int base = 0; 
    int incremento = 0; 
    float total = 0.0;
    float parcela = 0.0; 

    printf("Digite o numero de termos: ");
    scanf("%d", &termos); 
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    for (int i = 1; i <= termos ; i ++)
    {
        if (base == 4)
        {
            incremento = -1; 
        }
        else if ((base == 1) || (base == 0))
        {
            incremento = 1; 
        }
        
        base = base + incremento;
        parcela = pow(x, i + 1)/fact(base);

        if ((i + 1) % 2 == 0)
        {
            parcela = -1 * parcela; 
        }

        total = total + parcela; 
    }

    printf("O valor de S e: %.2f\n", total);
    return 0;
}

int fact (int num) 
{
    int resultado = 1; 
    for (int i = num; i > 0; i--)
    {
        resultado = resultado * i; 
    }
    return resultado; 
}
