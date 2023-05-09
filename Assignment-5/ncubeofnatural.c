# include<stdio.h>
void main(){
int i=1,j;
printf("Enter number: ");
scanf("%d",&j);
while(i<=j) {
 printf("%d\n",i*i*i);
i++;
}
}