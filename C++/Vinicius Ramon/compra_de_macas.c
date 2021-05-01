#include <stdio.h>
main()
{
      int valor;
      float resultado;
      while(1)
      {
      printf("digite a quantidade de macas compradas: ");
      scanf("%d",&valor);
      if(valor<12)
      {
                  resultado=valor*1.30;
                  printf("o numero de macas compradas e %d e o valor total da compra e %.2f \n",valor,resultado);
                  }
                  else
                  {
                      resultado=valor*1.00;
                      printf("o numero de macas compradas e %d e o valor total da compra e %.2f \n",valor,resultado);
                      }
                      }
}
