# include <stdio.h>
void main(){
    int i,j,o;
    for(i=1;i<5;i++){
        if(i==1){
        for(j=1;j<=5-i-1;j++){
            printf("%d ",j);
        }}
        else{
             for(j=1;j<=5-i;j++)
            printf("%d ",j); 
        }
        for(o=1;o<i-1;o++){
           printf("  "); 
        }
        if(i>1){
          for(j=0;j<=i-2;j++){
            printf("  ");}
        }
          if(i==4){
            for(j=5-i;j>=1;j--){
            printf("%d ",j);}}
            else{
               for(j=5-i;j>=1;j--)
            printf("%d ",j); 
            }
        printf("\n");
    }
}