# include <stdio.h>
void main(){
    int i,j,o;
    for(i=0;i<=5;i++){
        for(j=0;j<5;j++){
            printf(" ");
        }
        for(o=0;o<5-i;o++){
           printf("* "); 
        }
        printf("\n");
    }
}