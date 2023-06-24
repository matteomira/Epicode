#include <stdio.h>
#include <math.h>


int main()
{
	float valore;
	double areaQuadrato, areaCerchio, areaTriangoloE;


	while (valore<=0) {
		printf("Inserisci un valore: ");
		scanf("%f", &valore);
	}

	areaQuadrato = powf(valore,2);

	areaCerchio = M_PI * (powf(valore,2) / 4);

	areaTriangoloE = sqrtf(3) / 4 * powf(valore,2);

	printf("L'area del quadrato è: %.3f\n", areaQuadrato);
	printf("L'area del cerchio è: %.3f\n", areaCerchio);
	printf("L'area del triangolo equilatero è: %.3f\n", areaTriangoloE);

	return 0;
}