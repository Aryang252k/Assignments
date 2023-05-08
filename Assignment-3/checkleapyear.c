# include<stdio.h>
void main(){
   int x,y;
   printf("Enter a year: ");
   scanf("%d",&x);
   if(x%4==0){
    printf("%d is leap year.\n",x);
   }
   else{
printf("%d is not leap year.\n",x);
   }

}