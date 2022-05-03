#include <stdio.h>
main()
{
  float contador=0,media,valor,soma=0;
  while(contador<10)
              {
              printf("Digite um valor:");
              scanf("%f",&valor);
              soma=soma + valor;
              contador++;
}        
media=soma/10;
printf("a media da soma de todos os valores e %.2f \n\n",media);
while(1);
}
