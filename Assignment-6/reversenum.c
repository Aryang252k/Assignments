# include<stdio.h>
void main(){
int j,i,s=0,l;
printf("Enter number: ");
scanf("%d",&j);
l=j;
while(j!=0){
   i=j%10;
   s=s*10+i;
   j=j/10;
}
printf("Reverse of %d: %d\n",l,s);
}