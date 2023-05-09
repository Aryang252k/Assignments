# include<stdio.h>
void main(){
int i;
printf("Enter number: ");
scanf("%d",&i);
while(i>=1) {
 if(i%2==0)
 printf("%d\n",i);
 i--;
}
}