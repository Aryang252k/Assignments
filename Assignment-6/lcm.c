# include<stdio.h>
void main(){
int j,i,gcd,lcm;
printf("Enter two numbers: ");
scanf("%d %d",&j,&i);
for(int o=1;o<=j && o<=i;o++){
if(j%o==0 && i%o==0){
   gcd=o;
}
}
lcm=(j*i)/gcd;
printf("LCM of %d and %d is %d\n",j,i,lcm);
}
