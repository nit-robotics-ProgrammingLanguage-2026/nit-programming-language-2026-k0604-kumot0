
#include <stdio.h>

int main(void)
{
    int input_number;
    long long total = 0;
    long long current_number;

    scanf("%d", &input_number);

    if (input_number < 0)
    {
        printf("NG");
        return 0;
    }

    for (current_number = 1; ; current_number++)
    {
        if (current_number > input_number)
        {
            break;
        }

        if (current_number % 3 == 0 ||
            current_number % 5 == 0)
        {
            continue;
        }

        total += current_number;
    }

    printf("%lld", total);

    return 0;
}

