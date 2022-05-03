#include <stdio.h>
main()
{
     int estoque,max,min,media;
      while(1)
      {
              printf("digite a quantidade atual no estoque: ");
              scanf("%d",&estoque);
              printf("digite a quantidade maxima no estoque: ");
              scanf("%d",&max);
              printf("digite a quantidade minima no estoque: ");
              scanf("%d",&min);
              media= (max+min)/2;
              if(estoque>=media)
              {
              printf("Não efetuar compra \n");
              }
              else
              {
                  printf("Efetuar compra \n");
                  }
            
      }
}
