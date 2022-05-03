#include <stdio.h>
main()
{
      int ano1,ano2,permissao;
      while(1)
      {
      printf("digite o ano atual: ");
      scanf("%d",&ano1);
      printf("digite seu ano de nascimento: ");
      scanf("%d",&ano2);
      permissao=ano1-ano2;
      if(permissao>=16)
      {
                  
                  printf("voce ja pode votar este ano \n",permissao);
                  }
                  else
                  {
                      
                      printf("voce nao pode votar este ano \n",permissao);
                      }
                      }
}
