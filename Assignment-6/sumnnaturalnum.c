# include<stdio.h>
void main(){
int j,i,s=0;
printf("Enter number: ");
scanf("%d",&j);
for(i=1;i<=j;i++){
s+=i;
}
printf("Sum of nth terms: %d\n",s);
}