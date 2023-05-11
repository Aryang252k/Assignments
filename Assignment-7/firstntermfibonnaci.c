# include<stdio.h>

void main(){
    int i,t1=0,t2=1,num,n,p;
   num=t1+t2; p=5;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0){
        printf("%d is %dth term.\n",n,n+1);
    }
     else if(n==1){
    printf("%d is %dnd and %dth term.\n",n,n+1,n+2);

    }
    else if(n==2){
    printf("%d is %dth term.\n",n,n+2);

    }
    else if(n==3){
   printf("%d is %dth term.\n",n,p);
     }
    
   for(i=3;i<=n;i++){
       
       t1=t2;
       t2=num;
       num=t1+t2;
         if(num==n){
        printf("%d is %dth term.\n",n,p-1);
        break;
       }
       p++;
    
      
    
    }
    
}