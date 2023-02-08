# include <stdio.h>
void main(){
    int x,k,v;
    printf("Enter two numbers for x and y: ");
    scanf("%d%d",&x,&k);
    printf("Before swap:x = %d and y = %d\n",x,k);
     v=k;
     k=x;
     x=v;
    printf("After swap: x = %d and y = %d\n",x,k);
}