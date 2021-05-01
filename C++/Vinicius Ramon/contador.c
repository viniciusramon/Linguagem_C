#include <stdio.h>
main()
{
      int contador=0,numero=0,maior=0;
      while(contador<10)
      {
                        printf("Digite um numero: ");
                       scanf("%d",&numero);
                       if(numero>maior)
                       {
                                       maior=numero;
                                       }
                       contador++;
                       }
                       printf("o maior numero digitado e %d ",maior);
                        while(1);
}
