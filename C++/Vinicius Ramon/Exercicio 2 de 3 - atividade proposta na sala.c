#include <stdio.h>
main()
{
      int l,c,impar=0;
      int A[5][3];
      
      for(l=0;l<5;l++)
      {
                     for(c=0;c<3;c++)
                     {
                                     printf("digite o valor da matriz: ");
                                     scanf("%d",&A[l][c]);
                                     }
                                     }
                                     
      for(l=0;l<5;l++)
      {
                     for(c=0;c<3;c++)
                     {                               
                                                     if(A[l][c]%2==0)
                                                     {
                                                                     printf("%d ",A[l][c]);
                                                                     }
                                                                     }
                                                                     printf("\n");
                                                                     }               
                                     
      while (1);
      }
