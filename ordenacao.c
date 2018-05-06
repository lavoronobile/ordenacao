#include <stdio.h>
#include <stdlib.h>

int main(){
	int array[5] = {3,5,1,4,2};
	int i, i2, aux, pos_menor, menor;
	
	
	printf ("Array fora de ordem: \n");
	   for(i=0;i<5;i++);{
	    printf ("%d\t", array[i]);
	   }
	for (i=0;i<5;i++); {
	menor = array[i];
	pos_menor = i;
	  for (i2 = i+2;i2<5;i2++){
	  	if (array[i2]<menor){
	  		menor = array[i2];
	  		pos_menor = i2;
	    }
	}  
	if (pos_menor != i){
		aux = array[i];
		array[i] = array[pos_menor];
		array[pos_menor]=aux;
	}
}
   int j;
   printf ("Array em ordem: \n");
     for (j=0;j<5;j++){
     	printf("%d\t", array[j]);
	 }
	 
return 0;
}