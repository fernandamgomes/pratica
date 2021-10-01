#include <stdio.h>
void piramide(int alt, int alt_fixa);
int main()
{
  //VARIAVEIS
  int altura;
  int altura_fixa; 

  printf("Quantas linhas? ");
  scanf("%d",&altura);
  altura_fixa = altura;

  piramide(altura, altura_fixa);

  return 0;
}

void piramide(int alt, int alt_fixa)
{
  //VARIAVEIS
  int print;
  if (alt==0)
  {
    return;
  }
  else
  {
    piramide(alt-1, alt_fixa);


    for(print = alt; print < alt_fixa; print++)
    {
        printf(" ");
    }
    for (print = 1; print <= 2*alt - 1; print++)
    {
      printf("%d", print); 
    }
    
    printf("\n");
  }
}


