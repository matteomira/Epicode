#include <stdio.h>
#include <math.h>

int main()
{
        float valore;
        float areaQuadrato, areaCerchio, areaTriangoloE;


        while (valore<=0) {
                printf("Inserisci un valore: ");
                scanf("%f", &valore);
        }

        areaQuadrato = valore * valore;

        areaCerchio = M_PI * ((valore * valore) / 4);

        areaTriangoloE = sqrtf(3) / 4 * (valore * valore);

        printf("L'area del quadrato è: %.3f\n", areaQuadrato);
        printf("L'area del cerchio è: %.3f\n", areaCerchio);
        printf("L'area del triangolo equilatero è: %.3f\n", areaTriangoloE);

        return 0;
}
