//Casey O'Neill
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
float dollar;

int main()
{
    printf("Enter a dollar amount: ");
    scanf("%f", &dollar);

    int a = dollar / 20;      //calculates number of largest bills that "fit" into the dollar value
    float quotient1 = dollar / 20;  //calculates the remainder, in order to calculate smaller bills
    float difference1 = quotient1 - a;
    float remainder1 = difference1 * 20;
    printf("\nYou could pay $%.2f with %d twenties, ", dollar, a);

    int b = remainder1 / 10;
    float quotient2 = b / 10;
    float difference2 = quotient2 - b;
    float remainder2 = difference2 * 10;
    printf("%d tens, ", b);

    int c = remainder2 / 5;
    float quotient3 = c / 5;
    float difference3 = quotient3 - c;
    float remainder3 = difference3 * 5;
    printf("%d fives, ", c);

    int d = remainder3 / 1;
    float quotient4 = d / 1;
    float difference4 = quotient4 - d;
    float remainder4 = difference4 * 1;
    printf("%d ones.", d);

    Sleep(2000);
    exit(0);
}
