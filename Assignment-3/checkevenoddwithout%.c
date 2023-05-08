# include<stdio.h>
void main(){
   int x,y;
   printf("Enter a number: ");
   scanf("%d",&x);
   y=x/2;
   if(x==(y*2))
   {
    printf("%d is even.\n",x);
   }
   else
   {
    printf("%d is odd.\n",x);
   }
}