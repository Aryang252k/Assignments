# include <stdio.h>
void main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x&2!=0)
    printf("%d is Odd\n",x);
    else 
    printf("%d is Even\n",x);
}