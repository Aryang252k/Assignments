# include<stdio.h>
void main(){
int j,i,s=0;
printf("Enter number: ");
scanf("%d",&j);
i=j;
while(j!=0){
    j=j/10;
 s++;   
}
printf("Number of digit in %d: %d\n",i,s);
}