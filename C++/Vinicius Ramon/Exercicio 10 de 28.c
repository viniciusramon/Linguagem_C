#include <stdio.h>
main()
{
      float conta,saldo,credito,debito,saldoatual;
      while(1)
      {
              printf("digite o numero da sua conta: ");
              scanf("%f",&conta);
              printf("digite seu saldo: ");
              scanf("%f",&saldo);
              printf("digite o seu debito: ");
              scanf("%f",&debito);
              printf("digite seu credito: ");
              scanf("%f",&credito);
              saldoatual=(saldo-debito)+credito;
              if(saldoatual>=0)
              {
                               printf("SALDO POSITIVO \n \n");
                                } 
              else
              {
                  printf("SALDO NEGATIVO \n \n");
                  }
      }
}
