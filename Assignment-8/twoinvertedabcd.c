# include <stdio.h>
void main(){
    int i,o; char j;
    for(i=0;i<8;i++){
        for(j='A';j<'H'-i;j++){
            printf("%c",j);
        }
        for(o=0;o<i;o++){
           printf(" "); 
        }
        if(i>1){
          for(o=0;o<=i-2;o++){
            printf(" ");}
        }
          if(i==0){
            for(j='G'-i-1;j>='A';j--){
            printf("%c",j);}}
            else{
               for(j='G'-i;j>='A';j--)
            printf("%c",j); 
            }
        printf("\n");
    }
}