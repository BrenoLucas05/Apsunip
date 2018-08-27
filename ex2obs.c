#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float f,c;
	
	//entrada
	printf("Digite a temperatura em graus F : ");
	scanf("%f",&f);
	
	
	//processamento
 	c = (5*(f - 32))/9;
 	
 	
 	//saida
	printf("Graus C e : %4.1f",c);
	
	return 0;
	system("pause");
}
