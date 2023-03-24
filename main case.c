#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 

{
      char conceito;
	
      	 printf("digite o conceito:");
      	    scanf("%C",&conceito);


       switch (conceito)
       
       { 
           case 'A':
           	
           printf("\n informe seu nome: Nero Silva\n");
       	   printf("\n informe sua idade: 18 anos\n");
       	   printf("\n informe seu estado civil: casado\n");
                break;
       	case 'B':
           printf("\n informe seu endereço: rua suribim\n");
       	   printf("\n informe nome da sua esposa:thatiano nero\n");
       	   printf("\n informe o nome do seu filho:caue\n");
       	       break;
       	case 'C':
           printf("\n informe seu salario:7.500,00\n");
       	   printf("\n informe seu melhor amigo: Deus o todo poderoso AMÉM\n");
       	   printf("\n informe em quem voce tem fe:Jesus Cristo o Re dos Reis\n");
                break;
                
       	  default:
       	  printf("\n informe uma opcao valida");
       	
      }


	return 0;
}
