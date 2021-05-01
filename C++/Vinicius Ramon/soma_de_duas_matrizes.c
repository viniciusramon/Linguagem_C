#include <stdio.h>
main()
{
      int A[3][3],B[3][3],C[3][3];
      int l,c;
      
      for(l=0;l<3;l++)
      {
                      for(c=0;c<3;c++)
                      {
                                      printf("valor da primeira matriz: ");
                                      scanf("%d",&A[l][c]);
                                      }
                                      }
                                      
                                      
      for(l=0;l<3;l++)
      {
                      for(c=0;c<3;c++)
                      {
                                      printf("valor da segunda matriz: ");
                                      scanf("%d",&B[l][c]);
                                      }
                                      }
                                      
                                                                     
      for(l=0;l<3;l++)
      {
                      for(c=0;c<3;c++)
                      {
                                      C[l][c]=A[l][c]+B[l][c];
                                      }
                                      }
                                      
                                      
      for(l=0;l<3;l++)
      {
                      for(c=0;c<3;c++)
                      {
                                      printf("%d ",C[l][c]);
                                      }
                                      printf("\n");
                                      }
                                      
                                      
      system ("pause");
      }
