# include<stdio.h>
void main(){
    int x;
    printf("Enter the month number (1-12): ");
    scanf("%d",&x);
    switch(x){
    case 1: printf("JANUARY 31 days.\n");
            break;
    case 2: printf("FEBRUARY 28 days and 29 days in leap year.\n");
            break;
    case 3: printf("MARCH 31 days.\n");
            break;
    case 4: printf("APRIL 30 days.\n");
            break;
    case 5: printf("MAY 31 days.\n");
            break;
    case 6: printf("JUNE 30 days.\n");
            break;
    case 7: printf("JULY 31 days.\n");
            break;
    case 8: printf("AUGUST 31 days.\n");
            break;
    case 9: printf("SEPTEMBER 30 days.\n");
            break;
    case 10: printf("OCTOBER 31 days.\n");
            break;
    case 11: printf("NOVEMBER 30 days.\n");
            break;
    case 12: printf("DECEMBER 31 days.\n");
            break;
    default: printf("INVALID MONTH NUMBER!\n");
}
}