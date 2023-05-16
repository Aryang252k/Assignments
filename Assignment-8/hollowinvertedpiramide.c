# include <stdio.h>
void main(){
    int i,j,o;
    for(i=5;i>0;i--){
        for(j=0;j<=5-i;j++){
            printf(" ");
        }
        for(o=0;o<i;o++){
            if(i==4 &&( o==1 || o==2 ||o==3) || i==3 &&(o==1||o==2) || i==2 && o==1)
            printf(" ");
            else
            printf("*"); 
        }
         for(o=0;o<i-1;o++){
             if(i==4 && (o==1 || o==0) || i==3 && o==0)
            printf(" ");
            else
           printf("*");
        }
        printf("\n");
    }
}