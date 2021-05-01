#include <stdio.h>

main()
{
      int valor[20],i,par=0;
      
      for(i=0;i<20;i++)
      {
      printf("digite um valor: ");
      scanf("%d",&valor[i]);
      }
      
       for(i=0;i<20;i++)
      {
         if(valor[i]%2 == 0) {
           par++;              
         }
      }
      
      for(i=0;i<20;i++)
      {
      printf("%d ",valor[i]);
      }
      
      printf("\nTotal de numeros pares: %d\n ",par);
      
      while(1);
      }


