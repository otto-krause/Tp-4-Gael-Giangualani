#include <stdio.h>
#include <stdlib.h>

int  presion (float area, float fuer ) {
	float p=0;
	p=fuer/area ; 
	
	printf("La presion es : %.2f \n ",p);
	
	return p; 
	
}

int main (){
	float area=0,fuer=0;
	
	
	printf("ingrese valor de la fuerza :\n  ");
	scanf("%f",&fuer); 
	
	
	printf("Ingrese valor de area: \n  ");
	scanf("%f",&area);
	
	
	
	presion (area ,fuer);
	system("pause");
	
}

		
	
