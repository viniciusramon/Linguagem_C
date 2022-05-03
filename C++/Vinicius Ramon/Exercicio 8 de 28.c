#include <stdio.h>
main()
{
     int inicio,fim,total;
      while(1)
      {
              printf("digite o inicio da partida: ");
              scanf("%d",&inicio);
              printf("digite o termino da partida: ");
              scanf("%d",&fim);
              if(inicio>=fim)
              {
              total=24-inicio+fim;
              printf("O TOTAL DE HORAS JOGADAS E DE %d HORA(S) \n",total);
              }
              else
              {
                  total=fim-inicio;
                  printf("O TOTAL DE HORAS JOGADAS E DE %d HORA(S) \n",total);
                  }
            
      }
}
