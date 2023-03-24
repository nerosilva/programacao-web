#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main ()
{

   int idade;
	 printf ( " digite a idade: " );
	     scanf ( "%d" ,&idade);
	
	      if (idade > 18 )
	 printf ( " pode ??entrar na festa \n");
	        else  if (idade == 18 )
     printf ( " \verificar autorização dos pais \n " );
          else
     printf ( " \acesso negado \n " );	
	 

	return 0;
}
