#include <stdio.h>
main()
{
  float valor=0,negativos=0,v=0;
  while(valor<10)
              {
              printf("Digite um valor:");
              scanf("%f",&v);
              if(v<0)
              {
               negativos++;
              }
              
              valor++;
}        
printf("a quantidade de numeros negativos e %.1f \n\n",negativos);
while(1);
}
