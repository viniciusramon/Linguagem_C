#include <stdio.h>
main()
{
     int valor1,valor2,valor3;
      while(1)
      {
              printf("digite um valor: ");
              scanf("%d",&valor1);
              printf("digite outro valor: ");
              scanf("%d",&valor2);
              printf("digite mais um valor: ");
              scanf("%d",&valor3);
              if((valor1>valor2)&&(valor1>valor3)&&(valor2>valor3))
              {
              printf("os maiores valores sao %d e %d \n\n",valor1,valor2);
              }
              else if((valor2>valor1)&&(valor2>valor3)&&(valor3>valor1))
              {
                  printf("os maiores valores sao %d e %d \n\n",valor2,valor3);
                  }
                     else if((valor3>valor2)&&(valor3>valor1)&&(valor1>valor2))
                    {
                  printf("os maiores valores sao %d e %d \n\n",valor3,valor1);
                  }
            
      }
}
