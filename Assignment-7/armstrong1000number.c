# include<stdio.h>
void main()
{
int  i,j,k=0,o;
for(i=1;i<=1000;i++)
{  
o=i;
while(i!=0)
{ 
  j=i%10;
  k=k+j*j*j; 
  i=i/10;
}
i=o;
if(i==k)
{
printf("%d ",i);
}
k=0;
}
printf("\n");
}
