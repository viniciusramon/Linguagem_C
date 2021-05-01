#include <stdio.h>
main()
{
      int a,b,soma=0,cont;
      
           printf("digite o valor que sera multiplicado: ");
           scanf("%d",&a);
           printf("digite o numero de vezes q seu valor digitado sera multiplicado: ");
           scanf("%d",&b);
           
           for(cont=0;cont<b;cont++)
           {
                                    soma=soma+a;
                                    }
           printf("total %d",soma);
           system ("pause");
           }
