#include <stdio.h>
main()
{
      int A[3],B[3],C[3],i=0;
      
      for(i=0;i<3;i++)
      {
                      printf("Digite o valor do vetor A: ");
                      scanf("%d",&A[i]);
                      }
                        for(i=0;i<3;i++)
                        {
                        printf("Digite o valor do vetor B: ");
                        scanf("%d",&B[i]);
                        }
                        
                         for(i=0;i<3;i++)
                        {
                        C[i]=A[i]+B[i];
                        }
                         
                         printf("\no valor do vetor C e: ");
                                          
                                          for(i=0;i<3;i++)
                                          {
                                           printf("%d ",C[i]);
                                           }
                                           
                                           while(1);
                                           }
