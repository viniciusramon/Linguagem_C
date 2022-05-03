#include <stdio.h>
#include <string.h>
main()
{
      int valor[10],vetor1[5],vetor2[5],i,a=0,b=0,c=0;
      
      
      for(i=0;i<10;i++)
      {
      printf("digite um valor: ");
      scanf("%d",&valor[i]);
      }
      
      for(i=0;i<10;i++)
      {
      if(valor[i]%2==0)
        {
                       
                vetor1[a]=valor[i];
                a++;
                }
                
                  else
                  {
                  vetor2[b]=valor[i];
                  b++;
                  }
           
          if(a==5)
          { 
                  printf("os vetores pares sao: ");
                   
                   for(c=0;c<5;c++)
      {
                  printf("%d ",vetor1[c]);
                  }
                  a=0;
                  }
                  
                   if(b==5)
          {
                    printf("os vetores impares sao: ");
                    
                   for(c=0;c<5;c++)
      {
                  printf("%d ",vetor2[c]);
                  }
                  b=0;
                  }
                  }
                 
                      
                  system ("pause");
                  }      
