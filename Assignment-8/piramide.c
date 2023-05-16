# include <stdio.h>
void main(){
    int i,j,o;
    for(i=0;i<10;i++){
        for(j=0;j<=10-i;j++){
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