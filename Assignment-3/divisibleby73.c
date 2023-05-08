# include<stdio.h>
void main(){
   int x,y;
   printf("Enter a number: ");
   scanf("%d",&x);
   if(x%7==0 && x%3==0){
       printf("%d is divisible by 7 and 3.\n",x);
   }
  else if(x%7==0)
    printf("%d is divisible by 7.\n",x);
    else if(x%3==0)
     printf("%d is divisible by 3.\n",x);
     else{
    printf("%d is not divisible by 7 and 3.\n",x);
   }
   
  

}