# include<stdio.h>
void main(){
int j,i,s=0;
printf("Enter number: ");
scanf("%d",&j);
for(i=1;i<=j/2;i++){
if(j%i==0){
    s++;
}
}
if(s==1){
    printf("%d is prime number.\n ",j);
}
else{
printf("%d is not prime number.\n ",j);
}
}