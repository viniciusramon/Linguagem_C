#include <stdio.h>

main()
{
      float A,B,C,AB,AC,BC;
      
      while(1)
      {
      
      printf("digite o valor do ponto A: ");
      scanf("%f",&A);
      
      printf("digite o valor do ponto B: ");
      scanf("%f",&B);
      
      printf("digite o valor do ponto C: ");
      scanf("%f",&C);
      
      AB=A+B;
      AC=A+C;
      BC=B+C;
      
      if((A<BC)&&(C<AB)&&(B<AC))
      {
              printf("\nos pontos digitados formam um triangulo\n\n\n");
              }
                         
                        else
                        {
                            printf("\nos pontos digitados nao formam um triangulo\n\n\n");
                            }
                            }
                            }
