
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float sal, perc, aumento, porc, final; 
	printf("Digite o salario atual:");
	scanf("%f",&sal);
	printf("Valor percentual do aumento:\n");
	scanf("%f",&perc);
	porc = perc/100;
	aumento = sal*porc;
	printf ("O aumento eh %4.2f\n",aumento);
	final = sal + (sal*porc);
	printf ("\nSalario final eh: %4.2f\n\n",final);
	system ("pause");
	return 0;
	
}
