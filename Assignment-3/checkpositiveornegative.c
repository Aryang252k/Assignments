# include<stdio.h>
void main(){
    float x;
    printf("Enter a number: ");
    scanf("%f",&x);
    if(x>0){
        printf("%.3f is positive number. \n",x);
    }
    else if(x==0){
    printf("%.3f is neutral.\n",x);
    }
    else
     printf("%.3f is negative number. \n",x);
}