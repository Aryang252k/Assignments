# include<stdio.h>
void main(){
int j;
printf("Enter number: ");
scanf("%d",&j);
while(j>=1) {
 if(j%2!=0)
 printf("%d\n",j);
 j--;
}
}