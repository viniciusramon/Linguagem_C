#include <stdio.h>
main()
{
      int A[3][3];
      int l,c;
      
      for(l=0;l<3;l++)
      {
                      for(c=0;c<3;c++)
                      {
                                      printf("valor");
                                      scanf("%d",&A[l][c]);
                                      }
                                      }
                                      
                                      for(l=0;l<3;l++)
                                      {
                                                      for(c=0;c<3;c++)
                                                      {
                                                                      printf("%d ",A[l][c]);
                                                                      }
                                                                      printf("\n");
                                                                      }
                                                                      system ("pause");
                                                                      }
