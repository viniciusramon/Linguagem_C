#include <stdio.h>
main()
{
      int l,c,impar=0;
      int A[2][2],B[2][2],C[2][2];
      
      for(l=0;l<2;l++)
      {
                     for(c=0;c<2;c++)
                     {
                                     printf("digite o valor da primeira matriz: ");
                                     scanf("%d",&A[l][c]);
                                     }
                                     }
                                     
      for(l=0;l<2;l++)
      {
                     for(c=0;c<2;c++)
                     {
                                     printf("digite o valor da segunda matriz: ");
                                     scanf("%d",&B[l][c]);
                                     }
                                     }
                                     
      for(l=0;l<2;l++)
      {
                     for(c=0;c<2;c++)
                     {                               
                            C[l][c]=A[l][c]-B[l][c];
                            }
                            }
      
       for(l=0;l<2;l++)
      {
                     for(c=0;c<2;c++)
                     {
                                     printf("%d ",C[l][c]);
                                     }
                                     printf("\n");
                                     }
             
      while (1);
      }
