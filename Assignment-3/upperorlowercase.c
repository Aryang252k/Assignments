# include<stdio.h>
void main(){
   char x;
   printf("Enter a character: ");
   scanf("%c",&x);
   if(x>='A' && x<='Z')
   {
    printf("UPPERCASE\n");
   }
    else if(x>='a' && x<='b')
   {
    printf("LOWERCASE\n");
   }
   else{
    printf("Special character.\n");
   }

}