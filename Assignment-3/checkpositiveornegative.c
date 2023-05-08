# include<stdio.h>
void main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>0){
        printf("%d is positive number. \n",x);
    }
    else if(x==0){
    printf("%d is neutral.\n",x);
    }
    else
     printf("%d is negative number. \n",x);
}