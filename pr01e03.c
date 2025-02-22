//gcc pr01e01.c -o programa1 -std=c11
#include<stdio.h>
int main(){
    int mat[2][3]={{1,2,3}, {4,5,6}};
for(int j=0; j<2; j++){
    for(int i=0; i<3; i++){
       printf("Direccion mat(%d)(%d): %p \n", j, i, &mat[j][i]); 
    }
   }
    return 0;
}