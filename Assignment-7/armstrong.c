# include<stdio.h>
void main(){
int j,k=0,n,o;
printf("Enter the number: ");
scanf("%d",&n);
o=n;
while(n!=0)
{ 
  j=n%10;
  k=k+j*j*j; 
  n=n/10;
}
if(k==o){
    printf("%d is an armstrong number.",o);
}
else
{
 printf("%d is not an armstrong number.",o);
}
printf("\n");
}


