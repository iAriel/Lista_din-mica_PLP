#include<stdio.h>
#include<stdlib.h>
 
 
int main(){
 
 int *ptr,*temp;
 int i;
 
 ptr = (int *)malloc(4*sizeof(int));
 temp = ptr; 
 
 for(i=0; i < 4; i++){
     printf("Insira o número %d: ",i + 1);
     scanf("%d",ptr);
     ptr++;        
 }
 
 ptr = temp;
 
 for(i=0;i < 4;i++){
   printf("\nO %dº numero numero da lista é: %d",i + 1,*ptr);
   ptr++;
 }
 
 return 0;
}
