#include <stdio.h>
#include <stdlib.h>
int periare (float  a, float  b ){
	float  peri= 2*a+2*b ;
	float area=a*b;
	printf("El perimetro es: %.2f \n ",peri);
	printf("El area es: %.2f \n ",area );
	return area;
	
}
	
	
	int main (){
		float  a ,b;
		
		
		printf("Ingrese valor a : \n ");
		scanf("%f",&a);
		
		printf("Ingrese valor b : \n ");
		scanf("%f",&b);
		
		
		periare(a,b);
		
		
		
		system ("pause");
	
	}
