#include<stdio.h>
#include<stdlib.h>
#include<math.h>


main()
{
		int a, b;

		printf("Ingrese el primer numero: ");
		scanf("%d", &a);

		printf("Ingrese el segundo numero: ");
		scanf("%d", &b);

		if(a > b)
		{
				printf("\n\nEl numero %d es el mayor", a);
				printf("\n\nEl cuadrado de %d es: %d ", a, a*a);
		}

		if(a < b)
		{
				printf("\n\nEl numero %d es el mayor", b);
				printf("\n\nLa raiz cuadrada de %d es: %.2f ", b ,sqrt(b));
		}

		if(a == b)
		{
				printf("\n\n%d y %d son iguales", a,b);
		}
		printf("\n\n");
		system("pause");
}
