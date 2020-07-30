#include <stdio.h>

void obtener_vector_pares(int vector[100], int cantidad_pares);
bool es_par(int numero);


int main()
{
  int vector_pares[100], cantidad_pares;

  printf("Indique la cantidad de numeros pares a ingresar: ");
  scanf("%d",&cantidad_pares);

  obtener_vector_pares(vector_pares,cantidad_pares);

  printf("[");
  for(int i =0; i < cantidad_pares; i++)
  {
    printf("%d",vector_pares[i]);
    if(i < cantidad_pares-1) printf(",");
  }
  printf("]");

  getchar();
  getchar();

  printf("\n\n Saliendo del programa...\n");


  return 0;

}

void obtener_vector_pares(int vector[100], int cantidad_pares)
{
  int pares_encontrados = 0,numero = 1;

  while(pares_encontrados < cantidad_pares)
  {
    if(es_par(numero))
    {
      vector[pares_encontrados] = numero;
      pares_encontrados ++;
    }

    numero ++;
  }
}

bool es_par(int numero){
  return (numero % 2 == 0);
}
