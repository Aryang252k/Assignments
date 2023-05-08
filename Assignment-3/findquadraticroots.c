# include<stdio.h>
# include<math.h>
void main(){
    double a,b,c,dc,root1,root2,i,r;
    printf("Enter coefficients of a,b,c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    dc=b*b-4*a*c;
    if(dc>0){
        root1=-b+sqrt(dc)/2*a;
        root2=-b-sqrt(dc)/2*a;
        printf("Root1= %lf and Root2= %lf\n",root1,root2);
    }
     else if(dc=0){
        root1=-b/2*a;
        root2=root1;
        printf("Root1= %lf and Root2= %lf\n",root1,root2);
    }
    else{
        r=-b/2*a;
        i=sqrt(-dc)/2*a;
        printf("root1 = %.2lf+%.2lf and root2 = %.2lf-%.2lf\n", r, i, r, i);
    }
}