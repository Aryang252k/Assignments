# include<stdio.h>
void main(){
int a,b,i,j;
printf("Enter two number: ");
scanf("%d %d",&a,&b);
for(i=1;i<=a&&i<=b;i++){
    if(a%i==0&&b%i==0){
        j=i;
    }
}
printf("H.C.F is %d\n",j);
}