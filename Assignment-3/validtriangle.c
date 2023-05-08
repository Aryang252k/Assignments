# include<stdio.h>

void main(){
   int h,p,b,l;
   printf("Enter the length of hypotenus of triangle: ");
   scanf("%d",&h);
   printf("Enter the length of parpendicular of triangle: ");
   scanf("%d",&p);
   printf("Enter the length of base of triangle: ");
   scanf("%d",&b);
l=p*p+b*b;

   if(h*h==l){
    printf("Valide triangle.\n");
   }
   else{
      printf("Invalide triangle.\n");
   }

}