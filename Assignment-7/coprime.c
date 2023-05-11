# include<stdio.h>
void main(){
int j,i,k,s=0;
printf("Enter two number: ");
scanf("%d%d",&j,&k);
for(i=1;i<=j/2||i<=k/2;i++){
if(j%i==0&&k%i==0){
    s++;
}
}
if(s==1){
    printf("%d and %d are co-prime number.\n ",j,k);
}
else{
printf("%d and %d are not co-prime number.\n ",j,k);
}
}
