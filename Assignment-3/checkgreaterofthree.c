# include<stdio.h>
void main(){
   int x,y,z;
   printf("Enter three number: ");
   scanf("%d %d %d",&x,&y,&z);
   if(x>=y && x>=z)
   {
    printf("%d is greater.\n",x);
   }
   else if(y>=z)
   {
    printf("%d is greater.\n",y);
   }
   else
   {
    printf("%d is greater.\n",z);
   }

}