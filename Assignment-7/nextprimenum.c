# include<stdio.h>
void main(){
    int i,j,count=0,n,k=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i<=n+k;i++){
        for(j=1;j<=i/2;j++){
        if(i%j==0){
         ++count;
         }
        }
        if(count==1){
            printf("%d ",i);
            break;
            }
            k++;
            count=0;
        }
        printf("\n");
    }
    
