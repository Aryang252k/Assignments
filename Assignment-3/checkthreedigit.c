# include<stdio.h>
void main(){
   int x;
   printf("Enter a number: ");
   scanf("%d",&x);
   if(x>=100 && x<=999)
   {
    printf("%d is three digit number.\n",x);
   }
   else
   {
    printf("%d is not three digit number.\n",x);
   }

}