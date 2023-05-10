# include<stdio.h>
void main(){
   int a,b,c,d,e,s;
   printf("Enter marks of five subject: ");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
   s=a+b+c+d+e;
    if((a>=0) && (b>=0 ) && (c>=0) && (d>=0) && (e>=0) && (a<=100) && (b<=100) && (c<=100) && (d<=100) && (e<=100))
   {
     if( a<33 || b<33 || c<33 || d<33 || e<33)
   {
     printf("FAILED as you are not passed in each subject!\n");
   }
   else if(s>=165)
   {
    printf("You scored %d and PASSED.\n",s);
   }
   }
  else
   {  
    printf("INVALIDE MARKS!\n");
  }

}