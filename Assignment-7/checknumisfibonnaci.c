# include<stdio.h>
# include<stdlib.h>
void main(){
    int i,t1=0,t2=1,num,n,p;
   num=t1+t2; 
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0||n==1||n==2||n==3){
        printf("%d is in fibonacci series.\n",n);
    }
    for(i=3;i<=n;i++){
       t1=t2;
       t2=num;
       num=t1+t2;
         if(num==n){
        printf("%d is in fibonacci series.\n",n);
        p=0;
        break;
       }
      else{
      p=5;
      }
    }
if(p==5){
 printf("%d is not in fibonacci series.\n",n);  
    }
}