#include <stdio.h>


int factorial(int x1);

main()
{
	int n,num,fac;
	
	printf("Cuantos numeros desea calcular: ");
	scanf("%d",&n);
	
	for (int i=0; i<n;i++)
	{
		printf("Ingrese un numero: ");
	    scanf("%d",&num);
	    
	    printf("Su factorial es: %d\n",factorial(num));
	    
	    getchar ();
	    getchar ();
	}
}

int factorial(int x1)
{
	int f;
	if (x1!=0)
	{
		f= x1 *factorial(x1-1);
	}
	else
	{
		f=1;
	}
	return f;
}


