# include<stdio.h>
void main(){
int j,i,s=0;
printf("Enter number: ");
scanf("%d",&j);
for(i=1;i<=j;i++){
if(i%2==0)   
s+=i;
}
printf("Sum of nth even terms: %d\n",s);
}