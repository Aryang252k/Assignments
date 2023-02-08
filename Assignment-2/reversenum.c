# include <stdio.h>
void main(){
    int x,num=0,k;
    printf("Enter a three digit number : ");
    scanf("%d",&x);

     while(x!=0){
        k=x%10;
        num=num*10+k;
        x=x/10;
    }
    printf("Reverse: %d\n",num);
}