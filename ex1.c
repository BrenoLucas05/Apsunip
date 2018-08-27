
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char produto [50];
	float custo, venda;
	printf ("Escreva o nome do produto:");
	scanf ("%s",&produto);
	printf ("Digite o valor de custo do produto:");
	scanf ("%f",&custo);
	venda = (custo*0.3) + custo;
	printf ("\n O valor de venda do produto eh: \n\n %4.1f \n", venda);
	system ("PAUSE");
	return 0;
	
	
}
