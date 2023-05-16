# include <stdio.h>
void main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            if(i==2 && j==1 || i==3 && (j==1 || j==2 ))
            printf("  ");
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
}