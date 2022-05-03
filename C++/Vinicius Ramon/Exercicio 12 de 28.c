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
              if((valor1>valor2)&&(valor1>valor3))
              {
              printf("o maior valor e %d \n\n",valor1);
              }
              else if((valor2>valor1)&&(valor2>valor3))
              {
                  printf("o maior valor e %d \n\n",valor2);
                  }
                    else
                    {
                  printf("o maior valor e %d \n\n",valor3);
                  }
            
      }
}
