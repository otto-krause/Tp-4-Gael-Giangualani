#include <stdio.h>
#include <stdlib.h>

int   separado (int a , int b) {
	printf("valor de a es : %d \n ",a);
	printf("valor de b es : %d \n ",b);
	
	
	return a; 
	
}

int main (){
	int a =0, b=0;
	printf ("Ingrese valor de a: \n ");
	scanf("%d",&a);
	
	printf ("Ingrese valor de b: \n ");
	scanf("%d",&b);
	separado (a,b);
	system ("pause");
	

	
}
	
	
