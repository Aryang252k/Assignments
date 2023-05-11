# include<stdio.h>
void main(){
    int i,t1=0,t2=1,num,n;
   num=t1+t2;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    for(i=3;i<=n;i++){
       printf("%d ",num);
       t1=t2;
       t2=num;
       num=t1+t2;
    }
    printf("\n");
}