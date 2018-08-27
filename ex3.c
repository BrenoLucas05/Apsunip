#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float n1,n2,n3,a,b,c,d,e;
	
	printf("Digite o valor de a:");
	scanf("%f",&n1);
	printf("Digite o valor de b:");
	scanf("%f",&n2);
	printf("Digite o valor de c:");
	scanf("%f",&n3);
	
	a = (n1/n2) + 1;
	
	b =  (n1 - n2)/(n1 + n2);
	
	c = ( (n1 - (n2/n3)) / (n1 + (n2/n3)) );
	
	d = n1 - (n2 / (n2+n3) );
	
	e = ( (n2 + n3) * n1 ) / (n1 + n2);
	
	printf("O valor de A: %4.2f \n",a);
	printf("O valor de B: %4.2f \n",b);
	printf("O valor de C: %4.2f \n",c);
	printf("O valor de D: %4.2f \n" ,d);
	printf("O valor de E: %4.2f \n" ,e);
	
	
}
