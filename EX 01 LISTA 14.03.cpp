#include<stdio.h>
#include<locale.h>


main (){
	setlocale(LC_ALL,"Portuguese");
	int num1, num2;
	
	printf("Escreva dois n�meros que n�o sejam iguais. Entre com o primeiro n�mero:");
	  scanf("%d", &num1);
	 
	 printf("Entre com o segundo n�mero: ");
	  scanf("%d", &num2);
	  
	 
	 if (num1 > num2){
	 	printf("O primeiro n�mero � maior");
	 } 
	 
	 if (num2 > num1){
	 	printf("O segundo n�mero � maior que o primeiro n�mero");
	 }
	 
}
	  
	  
	  
