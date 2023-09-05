#include <stdio.h>
#include <stdlib.h>

int  may (int a,int b){
	if(a>b)
		
		printf("Es mayor el numero:%d \n ",a);
	else
		
		if(b>a)
		printf("Es mayor el numero:%d \n ",b);
	
		else
			printf("Son Iguales \n");
 	
	return a; 
}
int main() {
	int a=0,b=0;
	
	printf("Ingrese el valor de a: \n ");
	scanf("%d",&a);
	
	printf("Ingrese el valor de b: \n ");
	scanf("%d",&b);
	
	
	may(a,b);
	system("pause");

}
