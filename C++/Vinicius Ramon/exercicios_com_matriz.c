#include <stdio.h>
main()
{
      int numeros[3][3];
      int l,c,i;
      int zero1=0,zero2=0;
      int par=0,par1=0;
      float media[3];
      int linha;
      int mlinha;
      
      for(l=0;l<3;l++)
      {
                      for(c=0;c<3;c++)
                      {
                                      printf("matriz: ");
                                      scanf("%d",&numeros[l][c]);
                                      }
                                      }
                                      
      for(l=0;l<3;l++)
      {
                      for(c=0;c<3;c++)
                      {
                                      printf("%d ",numeros[l][c]);
                                      }
                                      printf("\n");
                                      }
                                      
      for(l=0;l<3;l++)
      {
                     for(c=0;c<3;c++)
                     {                 
                                       if(numeros[l][c]==0)
                                       {
                                                       zero1++;
                                                       }
                                                       }
      printf("\nnumeros zero linha %d: %d\n ",l,zero1);              
      zero1=0;                                                 
      }
      
     for(c=0;c<3;c++)
      {
                     for(l=0;l<3;l++)
                     {                 
                                       if(numeros[l][c]==0)
                                       {
                                                       zero2++;
                                                       }
      
      }
      
      printf("\nnumeros zero coluna %d: %d\n ",c,zero2);              
      zero2=0;                                              
      }
      
      for(l=0;l<3;l++)
      {
                     for(c=0;c<3;c++)
                     {                 
                                       if(numeros[l][c]%2==0)
                                       {
                                                       par++;
                                                       }
                                                       }
      printf("\nnumeros pares na linha %d: %d\n ",l,par);              
      par=0;                                                 
      }
      
      for(c=0;c<3;c++)
      {
                     for(l=0;l<3;l++)
                     {                 
                                       if(numeros[l][c]%2==0)
                                       {
                                                       par1++;
                                                       }
      
      }
      
      printf("\nnumeros pares na coluna %d: %d\n ",c,par1);              
      par1=0;                                              
      }
      
      for(l=0;l<3;l++)
      {
                     for(c=0;c<3;c++)
                     {                 
                                       linha=linha+numeros[l][c];
                                                       }
     media[l]=linha/c;
     linha=0;                                                               
     }
     
     for(i=0;i<3;i++)
     {
     printf("\nmedia da linha %d: %.1f\n ",i,media[i]);
     } 
     
     for(i=0;i<3;i++)
     {
                     if(media[i]>mlinha)
                     {
                                        mlinha=media[i];
                                        }
                                        }
                                        
     printf("\na maior media e a da linha %d: %d\n ",l,mlinha);                              
     
                                                                                                           
      while(1);
      }
