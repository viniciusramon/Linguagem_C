#include <stdio.h>
main()
{
      float media,n1,n2;;
      while(1)
      {
      printf("digite a primeira nota: ");
      scanf("%f",&n1);
      printf("digite a segunda nota: ");
      scanf("%f",&n2);
      media=(n1+n2)/2;
      if(media>=6)
      {
                  
                  printf("APROVADO, SUA MEDIA E %.2f \n",media);
                  }
                  else
                  {
                      
                      printf("REPROVADO, SUA MEDIA E %.2f \n",media);
                      }
                      }
}
