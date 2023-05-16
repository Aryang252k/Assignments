# include <stdio.h>
void main(){
    int i,j,o;
    for(i=0;i<5;i++){
        for(j=0;j<=5-i;j++){
            printf(" ");
        }

        for(o=0;o<i;o++){
         if( o==1 && i==2 ||(o==1 || o==2)&& i==3)
         { printf(" "); }
           else
          { printf("*");}
        }
         for(o=0;o<i-1;o++){
        if(o==0 && i==1 || i==3 && o==0){
           printf(" "); }
           else{
           printf("*");}
        }
        
        printf("\n");
    }
}