#include <stdio.h>
#include <windows.h>

int main()
{
    float input;
    printf("Enter a dollar amount to pay: ");
    scanf("%f", &input);
    int i;
    int money = 100*input;
    int currency[] = {2000, 1000, 500, 100, 25, 10, 5, 1};
    char *dough[] = {
        "twenties", "tens", "fives", "ones",
        "quarters", "dimes", "nickels", "pennies"};
    printf("\nYou could pay $%.2f with:\n", input);

    for(i = 0; i < 5; i++)
    {
        if(money >= currency[i])
        {
            printf("%d %s\n", money / currency[i], dough[i]);
            money = money % currency[i];
        }
    }
    Sleep(3500);
    return(0);
}
