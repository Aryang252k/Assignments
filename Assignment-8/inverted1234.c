# include <stdio.h>
void main(){
    int i,j;
    for(i=1;i<5;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
         for(j=1;j<=5-i;j++){
           printf("%d",j); 
        }
        if(i==4){
         }
        else{
        for(j=4-i;j>=1;j--)
           printf("%d",j); 
           }
        printf("\n");
    }
}