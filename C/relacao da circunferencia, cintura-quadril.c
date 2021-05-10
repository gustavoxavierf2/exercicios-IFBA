#include <stdio.h>
#include <stdlib.h>

int main(void)
{
float cc, cq, rcq;
	printf("circunferencia da cintura: (cm)");
	scanf("%f", &cc);
	printf("circunferencia quadril: (cm)");
	scanf("%f", &cq);
	printf("//////////////////////////////");
	printf("\n//////////////////////////////");
	printf("\n//////////////////////////////");
	rcq = (cc/cq);
	printf("\nrelacao da circunferencia, cintura-quadril = (cm)%.2f", rcq);
}
