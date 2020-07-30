#include <stdio.h>
#include <stdlib.h>


  

float calculo(int vector_precios[100],int cantidad,int resultado_final);
  
main(){
	int vector_precios[100],cantidad,resultado_final=0;
	printf("\nIngrese la cantidad de productos");
	scanf("%d",&cantidad);
	
	calculo(vector_precios,cantidad,resultado_final);
	
	
	printf("\El valor total a pagar es de:  %d",resultado_final);
}

float calculo(int vector_precios[100],int cantidad,int resultado_final){
	
	for(int i=0; i<=cantidad-1; i++){
		printf("\nIngrese el precio del elemento %d del vector: ",i);
		scanf("%d",&vector_precios[i]);
		
		
	}
	
	for(int i=0; i<=cantidad-1; i++){
		
		resultado_final=resultado_final+vector_precios[i];
		
	}
	
	
	return resultado_final;
	
}
