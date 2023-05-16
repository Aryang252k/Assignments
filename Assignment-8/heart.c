# include <stdio.h>
void main(){
    int i,j,o;
     for(i=0;i<=4;i++){
         for(j=5-i;j>0;j--){
        printf(" ");}
        for(j=3-i;j<=5;j++){
            printf("*");
        }
       for(j=3-i;j<=5;j++){
            printf("*");
        }
        for(j=5-i;j>0;j--)
        {
           printf(" ");
        }
        for(j=5-i-1;j>0;j--)
        {
           printf(" ");
        }
          for(j=3-i;j<=5;j++){
            printf("*");
        }
       for(j=3-i;j<=5;j++){
            printf("*");
        }
        printf("\n");
     }
    for(i=15;i>=0;i--){
        for(j=0;j<=15-i;j++){
            printf(" ");
        }
        for(o=0;o<i;o++){
           printf("*"); 
        }
         for(o=0;o<i-1;o++){
           printf("*"); 
        }
        printf("\n");
    }
   
}