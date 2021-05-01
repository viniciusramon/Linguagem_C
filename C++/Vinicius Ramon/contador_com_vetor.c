#include <stdio.h> 
#include <stdlib.h>
int main()
{
	int y[20], i, x[20], cont ;

	for(i=0; i<20; i++) 
		{   printf("informe o valor: ");
			scanf ("%d",&x[i]);
			y[i]=0;
		}
		
	for(cont=0;cont<20;cont++)
		{  for(i=0;i<20;i++)
			{   if( x[cont]== x[i])
            { 
  				y[cont]++;
              }  
				if(i==19)
                { 
				
  				printf( "O %d aparece %d vezes;\n", x[cont] ,y[cont]);
  				
  			}
}
		}
system("pause");
}
