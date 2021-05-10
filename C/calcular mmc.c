#include <stdio.h>
#include <stdlib.h>

int main(void)
{
float alt,peso;
	printf("=============================");
	printf("\n	  CALCULAR \n	    IMC");
	printf("\n=============================\n");
	printf("Digite sua altura: [x.xx] ");
	scanf("%f", &alt);
	printf("Digite seu peso: (Kg) ");
	scanf("%f", &peso);
	float imc = peso / (alt * alt);
	printf("\n\nSeu IMC: %.2f", imc);
	if (imc < 18.5)
	{
		printf("\nStatus: Abaixo do peso");
	}
	else
	{
		if ((imc >= 18.5) && (imc <= 24.9))
		{
			printf("\nStatus: Peso normal");
		}
		if ((imc > 24.9) && (imc <= 29.9))
		{
			printf("\nStatus: Sobre peso");
		}
		if ((imc > 29.9) && (imc <= 34.9))
		{
			printf("\nStatus: Obesidade grau I");
		}
		if ((imc > 34.9) && (imc <= 40))
		{
		printf("\nStatus: Sobre peso II");
		}
		if (imc > 40)
		{
		printf("\nStatus: Sobre peso III");
		}
    }	
}
