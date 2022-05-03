#include <stdio.h>
main()
{
  float valor=0,negativos=0,v=0,fora;
  while(valor<10)
              {
              printf("Digite um valor:");
              scanf("%f",&v);
              if((v>=10)&&(v<=20))
              {
               negativos++;
              }
              else
              {
                  fora++;
                  }
              valor++;
}        
printf("a quantidade de numeros entre 10 e 20 e %.0f e a quantidade de numeros que nao estao entre 10 e 20 e %.0f \n\n",negativos,fora);
while(1);
}
