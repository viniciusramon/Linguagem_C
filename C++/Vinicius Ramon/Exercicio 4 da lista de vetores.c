#include <stdio.h>
#include <string.h>
main()
{
      int vetor1[10],i,j,auxiliar;
      
      
      for(i=0;i<10;i++)
      {
      printf("digite um valor: ");
      scanf("%d",&vetor1[i]);
      }
                    
                    i=0;
                    j=9;
                    
                    while(i<j)
                    {
                              auxiliar=vetor1[i];
                              vetor1[i]=vetor1[j];
                              vetor1[j]=auxiliar;
                              i++;
                              j--;
                              }
                    
                    for(i=0;i<10;i++)
                    {
                                     printf("%d ",vetor1[i]);
                                     }
                 
                      
                  system ("pause");
                  }      
