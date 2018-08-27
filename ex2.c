#include <math.h>
#include <stdio.h>


int main() {
	
	float f,c;
	
	printf("Digite a temperatura em graus C : ");
	scanf("%f",&c);
	
	f = (9 * c + 160)/5;
	printf("Graus f e : %4.1f",f);
	
	return 0;

}
