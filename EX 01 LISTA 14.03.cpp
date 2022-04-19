#include<stdio.h>
#include<locale.h>


main (){
	setlocale(LC_ALL,"Portuguese");
	int num1, num2;
	
	printf("Escreva dois números que não sejam iguais. Entre com o primeiro número:");
	  scanf("%d", &num1);
	 
	 printf("Entre com o segundo número: ");
	  scanf("%d", &num2);
	  
	 
	 if (num1 > num2){
	 	printf("O primeiro número é maior");
	 } 
	 
	 if (num2 > num1){
	 	printf("O segundo número é maior que o primeiro número");
	 }
	 
}
	  
	  
	  
