main()
{
      float nota1,nota2,media,exame;
      while(1)
      {
              printf("digite sua primeira nota: ");
              scanf("%f",&nota1);
              printf("digite sua segunda nota: ");
              scanf("%f",&nota2);
             media=(nota1+nota2)/2;
              if(media>=7)
              {
              printf(" \nVOCE ESTA APROVADO!!!!! SUA MEDIA E %.2f\n",media);
                               }
              else if(media<4)
              {
              printf(" \nLAMENTO MAIS VOCE ESTA REPROVADO, SUA MEDIA E %.2f\n",media);
                  } 
              else
              {
                  exame=10-media;
                  printf("\nVOCE TEM CHANCE DE FAZER O EXAME!!!\n\n SUA MEDIA E %.2f E VOCE PRECISA DE %.2f PARA SER APROVADO \n\n",media,exame);
                  }
                  }
                  }
