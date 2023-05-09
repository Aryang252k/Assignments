# include<stdio.h>
void main(){
int i=1,j;
printf("Enter number: ");
scanf("%d",&j);
while(i<=j) {
    if(i%2==0)
 printf("%d\n",i);
i++;
}
}