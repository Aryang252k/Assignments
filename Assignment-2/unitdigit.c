# include <stdio.h>
void main(){
    int x;
    printf("Enter a number to find unit digit: ");
    scanf("%d",&x);
     x=x%10;
    printf("Unit digit: %d\n",x);
}