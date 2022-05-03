#include <stdio.h>
#include <string.h>

main()
{
      char texto[20];
      int i;
      
      printf("digite o texto: ");
      gets(texto);
//==============================================================================       
      for(i=0;i<strlen(texto);i++)
      {
                                  printf("%c",texto[i]);
                                  }
      printf("\n");
//==============================================================================                                  
      for(i=strlen(texto)-1;i>=0;i--)
      {
                                  printf("%c",texto[i]);
                                  }
//==============================================================================
getch();
}                                  
      
