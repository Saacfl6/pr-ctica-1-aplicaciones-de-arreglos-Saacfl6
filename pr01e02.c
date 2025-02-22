//gcc pr01e01.c -o programa1 -std=c11
#include<stdio.h>
int main(){
    int a[3]={1,2,3};
    for(int i=0; i<3; i++){
       printf("Direccion a(%d): %p \n", i, &a[i]); 
    }
    printf("Direccion a: %p  \n", &a);
	printf("Direccion a(0): %p  \n", &a[0]);
    return 0;
}