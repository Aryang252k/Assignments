# include <stdio.h>
void main(){
    int i,j;
    char o;
    for(i=1;i<5;i++){
        for(j=1;j<i;j++){
            printf("  ");
        }
         for(o='A';o<=69-i;o++){
           printf("%c ",o); 
        }
        if(i==4){
         }
        else{
        for(o=69-i-1;o>=65;o--)
           printf("%c ",o); 
           }
        printf("\n");
    }
}