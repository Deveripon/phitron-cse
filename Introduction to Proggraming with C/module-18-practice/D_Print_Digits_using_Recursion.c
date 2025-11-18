#include <stdio.h>

void print_digits(int digit)
{
    if (digit <= 9)
    {
        printf("%d ", digit);
        return;
    }

    int last_digit = digit % 10;
    digit = digit / 10;
    print_digits(digit);
    printf("%d ", last_digit);
}
int main()
{
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases != 0)
    {
        int digit;
        scanf("%d", &digit);
        print_digits(digit);
        printf("\n");

        test_cases--;
    }

    return 0;
}