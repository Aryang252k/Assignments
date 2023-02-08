# include <stdio.h>
void main(){
    int x,k;
    printf("Enter two numbers for x and y: ");
    scanf("%d%d",&x,&k);
    printf("Before swap:x = %d and y = %d\n",x,k);
    x=x+k;
    k=x-k;
    x=x-k;
    printf("After swap: x = %d and y = %d\n",x,k);
}