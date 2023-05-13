# include<stdio.h>
void main(){
int j,n;
printf("Enter the number: ");
scanf("%d",&n);

while(n!=0)
{ 
  j=n%2;
  if(j!=0){
     printf("1");
  }
  else
  {
 printf("%d",j);
  }
  n=n/2;
}
printf("\n");
}

