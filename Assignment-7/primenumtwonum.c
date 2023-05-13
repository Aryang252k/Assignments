# include<stdio.h>
void main(){
    int i,j,count=0;
    printf("Enter two number: ");
    scanf("%d %d",&i,&j);
    if(i>j)
    {
      int temp=i;
      i=j;
      j=temp;
    }
    for(int o=i;o<=j;o++){
        for(int k=1;k<=o/2;k++){
        if(o%k==0){
         count++;
         }
        }
        if(count==1){
            printf("%d ",o);
            }
            count=0;
        }
        printf("\n");
    }
    
