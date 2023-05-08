# include<stdio.h>
void main(){
   float c,s,p;
   printf("Enter a cost price: ");
   scanf("%f",&c);
   printf("Enter a selling price: ");
   scanf("%f",&s);
   if(c>=s){
    p=(c-s)/s*100;
    printf("Loss percentage = %.2f\% \n",p);
   }
   else{
 p=(s-c)/c*100;
    printf("Profit percentage = %.2f\% \n",p);
   }

}