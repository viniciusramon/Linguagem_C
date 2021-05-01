#include <stdio.h>

main()
{
      int idade,maior,feminino=0,cont=0;
      char sexo[16], olhos[16], cabelo[16];
      
      printf("digite a idade: ");
      scanf("%d",&idade);
      
      maior=idade;
      
      while(idade>0)
      {
      
      printf("digite m(para sexo masculino) e f(para sexo feminino):\n\n ");
      scanf("%s",&sexo);
      
      printf("digite a cor dos olhos se sao azuis, verdes ou castanho:\n\n ");
      scanf("%s",&olhos);
      
      printf("digite a cor do cabelo se sao louros, castanhos ou pretos:\n\n ");
      scanf("%s",&cabelo);
      
      if(maior<idade)
      {
                     maior=idade;
                     }
                     
      if((strcmp(sexo,"f") == 0) && (idade>=18) && (idade<=35) && (strcmp(olhos,"verdes") == 0) && (strcmp(cabelo,"louros") == 0))
      {
                 feminino++;
                 
                 }
      
      printf("digite a idade: ");
      scanf("%d",&idade);
      
      cont++;
      }
      
       printf("\n\na maior idade entre os habitantes e %d\n\n",maior);
       
       printf("ao numero de pessoas do sexo feminino que esta entre 18 a 35 anos\ne possue cabelos louros e olhos verdes e %d\n\n",feminino);
      
      while(1);
      }
