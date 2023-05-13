# include<stdio.h>
void main(){
    int i,j,count=0;
    for(i=1;i<=100;i++){
        for(j=1;j<=i/2;j++){
        if(i%j==0){
         count++;
         }
        }
        if(count==1){
            printf("%d ",i);
            }
            count=0;
        }
        printf("\n");
    }
    
