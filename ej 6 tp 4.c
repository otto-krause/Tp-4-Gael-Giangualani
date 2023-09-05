#include <stdio.h>
#include <stdlib.h>
int n(float  a ){
	float  num=0 ; 
	num=a/8;
	printf("La octava parte de su numero es: %.2f \n ",num);
	return num;}

int main (){
float a=0; 
printf("ingrese un numero : ");
scanf("%f",&a); 
	
	
n(a);
system("pause");


}
	

	


