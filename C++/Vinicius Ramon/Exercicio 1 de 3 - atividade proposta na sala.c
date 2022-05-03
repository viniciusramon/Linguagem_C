#include <stdio.h>
main()
{
      int l,c,impar=0;
      int A[5][5];
      
      for(l=0;l<5;l++)
      {
                     for(c=0;c<5;c++)
                     {
                                     printf("digite o valor da matriz: ");
                                     scanf("%d",&A[l][c]);
                                     }
                                     }
                                     
      for(l=0;l<5;l++)
      {
                     for(c=0;c<5;c++)
                     {
                                     printf("%d ",A[l][c]);
                                     }
                                     printf("\n");
                                     }
      for(l=0;l<5;l++)
      {
                     for(c=0;c<5;c++)
                     {                 
                                       if(A[l][c]%2!=0)
                                       {
                                                       impar++;
                                                       }
                                                       }
                                                       }
      
      printf("\no total de numeros impares e %d \n\n", impar);
                      
                                     
      while (1);
      }
