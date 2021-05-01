#include <stdio.h>
main()
{
      int valor1,valor2;
      while(1)
      {
      printf("digite um valor: ");
      scanf("%d",&valor1);
      printf("digite outro valor: ");
      scanf("%d",&valor2);
      if(valor1>valor2)
      {
                  
                  printf("a ordem crescente dos valores e %d %d \n",valor2,valor1);
                  }
                  else
                  {
                      
                      printf("a ordem crescente dos valores e %d %d \n",valor1,valor2);
                      }
                      }
}
