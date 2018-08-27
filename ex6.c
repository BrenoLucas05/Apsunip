#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float sal, diminui, aumento, porc, final; 
	printf("Digite o salario atual:");
	scanf("%f",&sal);
	final = sal-(sal*0.02);
	printf ("\nSalario final eh: %4.2f\n\n",final);
	
	
	system ("pause");
	return 0;
	
}
