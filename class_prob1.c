#include <stdio.h>
int main()
{
    int days, months;
    
    printf("enter days: \n");
    scanf("%d", &days);

    months = days / 30;
    days = days % 30;

    printf("\n months = %d days = %d", months, days);

    return 0;
}