#include <stdio.h>
#include <stdlib.h>

int main (void)
{
float veloc;
	printf("qual a velocidade do veiculo em km/h: ");
	scanf("%f", &veloc);
	float km_x_mph = veloc * 0.61;
	printf("Velocidade em mph/h: %.2f", km_x_mph);
}
