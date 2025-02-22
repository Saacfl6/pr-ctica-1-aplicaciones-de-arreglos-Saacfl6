//gcc pr01e01.c -o programa1 -std=c11
#include<stdio.h>
int main(){
    char a[5]={'a','b','c','d','f'};
    for(int i=0; i<5; i++){
       printf("Lugar: %p\n", &a[i]); 
    }
	
    return 0;
}