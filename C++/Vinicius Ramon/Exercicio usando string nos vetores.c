#include <stdio.h>
#include <string.h>
main()
{
      char texto[50];
      int tamanho;
      
      printf("Digite o texto: ");
      gets(texto);
      
      tamanho=strlen(texto);
      
      printf("o total de caracteres: %d",tamanho);
      
      while(1);
      }
