#include <stdio.h>
#include <stdlib.h>
/* Calculadora com as 4 operações matemáticas  */

int main() {
	
int op,num1,num2;

do{
 
printf("\n1- Soma\n2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n 0 - Sair\n");
scanf("%d",&op);

printf("Digite dois valores");
scanf("%d%d",&num1,&num2);

switch (op){ 
case 0: 
printf("Saindo....");
break;
case 1: 
printf("Soma :%d\n", num1 + num2);
break;
case 2:
printf("Subtração:%d\n", num1 - num2);
break;
case 3: 
printf("Multiplicação:%d\n", num1 * num2);
break;
case 4: 
while ( num2 == 0){
printf(" Nao existe divisao por zero\n Digite outro valor:");
scanf("%d",&num2);
}
printf("Divisão:%d",num1/num2);
break;

default: 
printf("opção inválida. \n Digite outra opção: ");
}

}
while	(op !=0);





}






