# include<stdio.h>
void main(){
    char name[20],surname[20];
    printf("Enter your name : ");
    scanf("%s",name);   // use fgets or gets
    scanf(" %s",surname);
    printf("\"Hello,%s %s\" \n",name,surname);
}