#include <stdio.h>
#include <locale.h> // setlocale()
#include <stdlib.h> // system()
#include <string.h> // strcmp()

int main(){
	int inteiro, numerador, denominador, resultado, op, resto;
	char ret[1];
	
	setlocale(LC_ALL, "Portuguese");

	do{
		system("clear");
		puts("\n\t\tFractions v0.1\n");

		// Choice
		puts("1 - Converter fração imprópria para mista");
		puts("2 - Converter fração mista para imprópria");
		printf("Escolha: ");
		scanf("%i", &op);

		// Get Values
		printf("\nParte Inteira: ");
		scanf("%i", &inteiro);

		printf("Numerador: ");
		scanf("%i", &numerador);

		printf("Denominador: ");
		scanf("%i", &denominador);

		// Calcs
		if (op == 1){
			resultado = numerador / denominador;
			resto = numerador % denominador;
			printf("Resultado: %i %i/%i",  resultado, resto, denominador);
		} else if (op == 2){
			resultado = denominador * numerador + inteiro;
			printf("Resultado: %i/%i", resultado, denominador);
		} else {
			printf("Opção Invalida");
		}
		
		printf("\n\nFazer mais contas?(S|N): ");
		scanf("%s", &ret);

	} while(strcmp(ret, "S") == 0);

	return 0;
}
