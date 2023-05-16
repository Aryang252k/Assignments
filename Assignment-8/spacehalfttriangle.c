# include <stdio.h>
void main(){
    int i,j,o;
    for(i=5;i>0;i--){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(o=0;o<=5-i;o++){
           printf("*"); 
        }
        printf("\n");
    }
}