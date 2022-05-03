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
                  
                  printf("o maior valor e %d \n",valor1);
                  }
                  else
                  {
                      
                      printf("o maior valor e %d \n",valor2);
                      }
                      }
}
