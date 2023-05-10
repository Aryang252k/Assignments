# include<stdio.h>
void main(){
int j,i,s=1;
printf("Enter number: ");
scanf("%d",&j);
for(i=1;i<=j;i++){
 s*=i;
}
printf("Factorial of nth term: %d\n",s);
}