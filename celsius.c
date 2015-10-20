#include <stdio.h>



int main() {
	float cel;
	float fa;
	printf("\n Escreva uma temperatura em Celsius e converterei para Fahrenheit");
	scanf("%f",&cel);
	fa=(1.8*cel)+32;
	printf("%f",fa);
	return 0;
}
