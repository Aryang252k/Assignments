# include <stdio.h>
void main(){
    int i,j,o;
    for(i=0;i<10;i++){
        for(j=0;j<10-i;j++){
            printf("*");
        }
        for(o=0;o<i;o++){
           printf(" "); 
        }
        if(i>1){
          for(j=0;j<=i-2;j++){
            printf(" ");}
        }
          if(i==0){
            for(j=0;j<10-i-1;j++){
            printf("*");}}
            else{
               for(j=0;j<10-i;j++)
            printf("*"); 
            }
        printf("\n");
    }
}