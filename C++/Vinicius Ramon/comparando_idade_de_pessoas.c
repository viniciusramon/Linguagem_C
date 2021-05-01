#include <stdio.h>
main()
{
      char* nome1[20], nome2[20];
      int idade1,idade2,ano1,ano2;
      while(1)
      {
              printf("digite seu nome: ");
              scanf("%s",&nome1);
              printf("digite sua idade %s: ",nome1);
              scanf("%d",&idade1);
              printf("digite nome de outra pessoa: ");
              scanf("%s",&nome2);
              printf("digite sua idade %s: ",nome2);
              scanf("%d",&idade2);
              printf("digite o ano atual: ",nome2);
              scanf("%d",&ano1);
              if(idade1<idade2)
              {
                               ano2=ano1-idade1;
                               printf(" %s voce e mais novo(a) que %s e nasceu no ano de %d\n ", nome1,nome2,ano1);
                               }
              else
              {
                  ano2=ano1-idade2;
                  printf(" %s vc e mais novo(a) que %s e nasceu no ano de %d\n ", nome2, nome1,ano2);
                  }
                  }
                  }
