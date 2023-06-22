#include <stdio.h>
int main()

{
    int td, y, m, d;

    printf("Enter the number of days=  ");
    scanf("%d", &td);

    y = td / 365;
    m = (td % 365) / 30;
    d = (td % 365) % 30;

    printf("years= %d\n month= %d \n days= %d", y, m, d);

    return 0;
}