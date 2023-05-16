# include <stdio.h>
void main(){
    int i,j;
    for(i=5;i>1;i--){
        for(j=1;j<i;j++){
            printf(" ");
        }
         for(j=1;j<=5-i+1;j++){
           printf("%d",j); 
        }
        if(i==1){
         }
        else{
        for(j=5-i;j>=1;j--)
           printf("%d",j); }
        printf("\n");
    }
}