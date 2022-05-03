#include <stdio.h>

main()
{
      int vetor1[10],i,vetor2[10],vetor3[10];
      
      for(i=0;i<10;i++)
      {
      printf("digite o primeiro vetor: ");
      scanf("%d",&vetor1[i]);
      }
      
      for(i=0;i<10;i++)
      {
      printf("digite o segundo vetor: ");
      scanf("%d",&vetor2[i]);
      }
      
       for(i=0;i<10;i++)
      {
         vetor3[i]=vetor1[i]-vetor2[i];         
       
      }
      
      printf("o vetor C e : ");
      
      for(i=0;i<10;i++)
      {
      printf("%d ",vetor3[i]);
      }
      
      system ("pause");
      }
