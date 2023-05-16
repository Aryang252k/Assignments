# include <stdio.h>
void main(){
    int i,j,o;
    for(i=5;i>0;i--){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(o=0;o<=5-i;o++){
           if(i==3 && o==1 || i==2 && (o==1 || __OFF_T_MATCHES_OFF64_T==2 ))
            printf(" ");
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}