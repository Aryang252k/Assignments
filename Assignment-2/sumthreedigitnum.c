# include <stdio.h>
void main(){
    int x,sum=0,k;
    printf("Enter a three digit number : ");
    scanf("%d",&x);

     while(x!=0){
        k=x%10;
        sum+=k;
        x=x/10;
    }
    printf("Sum: %d\n",sum);
}