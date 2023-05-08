# include<stdio.h>
void main()
{   int a,b;
    printf("Enter a number :");
    scanf("%d",&a);
    if(a%5==0){
        printf("%d is divisible by 5.",a);
    }
    else{
        printf("%d is not divisible by 5.",a); 
    }
}