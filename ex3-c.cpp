#include <math.h>
#include <stdio.h>


int main() {
	
	float a, b, c, r, f, j;
	
	printf("Digite o valor de a:");
	scanf("%f",&a);
	printf("Digite o valor de b:");
	scanf("%f",&b);
	printf("Digite o valor de c:");
	scanf("%f",&c);
	
	r = a - (b/c); 
	printf("%f \n",r);
	
	f = a + (b/c);
		printf("%f \n",f);
    j = (r/f);

	printf("o resultado e : %4.1f" , j);
	
	return 0;

}
