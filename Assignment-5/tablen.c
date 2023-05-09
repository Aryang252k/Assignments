# include<stdio.h>
void main(){
int i=1,j;
printf("Enter number: ");
scanf("%d",&j);
while(i<=10) {
 printf("%d * %d = %d\n",j,i,i*j);
i++;
}
}