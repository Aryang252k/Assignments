# include <stdio.h>
void main(){
    char i,o;
    int j,k=0;

    for(i='A';i<='E';i++,k++){
        for(j=0;j<=5-k;j++){
            printf("  ");
        }
        for(o='A';o<=i;o++){
           printf("%c ",o); 
        }
        if(i=='A')
        {}
         else{
        for(o=65+k-1;o>=65;o--){
           printf("%c ",o); 
        }}
        printf("\n");
    }
}